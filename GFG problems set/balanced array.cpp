#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,c=0;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i<n/2)
            {
               c+=a[i];
            }
            else
            {
                s+=a[i];
            }
        }
        cout<<abs(c-s)<<endl;
    }
	//code
	return 0;
}
