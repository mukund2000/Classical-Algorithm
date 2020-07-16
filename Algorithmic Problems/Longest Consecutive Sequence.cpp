#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FindLongestSeq(vector<int>& v)
{
    int n=v.size(),ans=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(v[i]-1)==s.end())
        {
            int j=v[i];
            while(s.find(j)!=s.end())
            {
                j++;
            }
            ans=max(ans,j-v[i]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int res=FindLongestSeq(v);
    cout<<res<<"\n";
}
/*Time Complexity:O(n)
Space complexity:O(n)*/
