#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &v)
{
    int sum=0,len=0;
    int n=v.size();
    unordered_map<int,int>presum;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(v[i]==0&&len==0)
        {
            len=1;
        }
        if(sum==0)
            len=i+1;
        if(presum.find(sum)!=presum.end())
            len=max(len,i-presum[sum]);
        else
            presum[sum]=i;

    }
    return len;
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
    int res=maxLen(v);
    cout<<res<<"\n";
}
/*Time Complexity:O(n)
Space Complexity:O(n)*/
