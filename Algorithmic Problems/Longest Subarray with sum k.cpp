#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SubArraySumK(vector<int>&v,int k)
{
    int r=0,s=0;
    int n=v.size();
    unordered_map<int,int> m;
    m[0]++;
    for(int i=0;i<n;i++)
    {
        s+=v[i];
        if(m[s-k])
            r+=m[s-k];
        m[s]++;
    }
    return r;

}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int res=SubArraySumK(v,k);
    cout<<res<<"\n";
}
/*Time Complexity:O(n)
Space Complexity:O(n)*/

