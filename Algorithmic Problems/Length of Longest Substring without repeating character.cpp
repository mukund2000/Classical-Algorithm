#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LongUnique(string s)
{
    int n=s.size();
    int ans=0;
    vector<int>lastindex(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,lastindex[s[j]]+1);
        ans=max(ans,j-i+1);
        lastindex[s[j]]=j;
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    int res=LongUnique(s);
    cout<<res<<"\n";
}
/*Time Complexity:O(n+d)
Space Complexity:O(d)*/


