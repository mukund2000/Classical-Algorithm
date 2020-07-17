#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        m[a[i]]++;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=m[k-a[i]];
            if(k-a[i]==a[i])
            count--;
        }
        cout<<count/2<<"\n";
    }
	return 0;
}
/*Time Complexity : O(n)
Auxiliary Space : O(1)*/
