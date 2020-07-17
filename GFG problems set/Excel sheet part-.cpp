#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s="";
        int i=0;
        while(n>0)
        {
            int rem=n%26;
            if(rem==0)
            {
                s+='Z';
                n=n/26-1;
            }
            else
            {
                s+='A'+rem-1;
                n=n/26;
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<"\n";
    }
	//code
	return 0;
}
