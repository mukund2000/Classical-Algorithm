#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& num,int s)
{
    /**unordered_map<int,int> h;
    vector<int> result;
    for(int i=0;i<num.length();i++)
    {
        int temp=s-num[i];
        if(h.find(temp)!=h.end)
        {

            result.push_back(h[temp]+1);
            result.push_back(i+1);
            return result;
        }
        h[num[i]]=i;
    }
    return result;**/
    unordered_set<int> se;
    vector
    for(int i=0;i<num.size();i++)
    {
        int temp=s-num[i];
        if(se.find(temp)!=s.end())
        {

        }
    }
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    vector<int> ans=twoSum(a,x);
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i]<<" ";
    }
}
