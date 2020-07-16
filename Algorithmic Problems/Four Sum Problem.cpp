#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> FourSum(vector<int>& a,int t)
{
    vector<vector<int>> res;
    int n=a.size();
    if(n<4)
        return res;
    sort(a.begin(),a.end());
    for(int i=0;i<n-3;i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        if((a[i]+a[i+1]+a[i+2]+a[i+3])>t) break;
        if((a[i]+a[n-1]+a[n-2]+a[n-3])<t) continue;
        for(int j=i+1;j<n-2;j++)
        {
            if(j>i+1&&a[j]==a[j-1]) continue;
            if((a[i]+a[j]+a[j+1]+a[j+2])>t) break;
            if((a[i]+a[j]+a[n-1]+a[n-2])<t) continue;
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                int sum=a[i]+a[j]+a[l]+a[r];
                if(sum<t)
                    l++;
                else if(sum>t)
                    r--;
                else
                {
                    res.push_back(vector<int>{a[i],a[j],a[l],a[r]});
                    do{l++;}while(l<r && a[l]==a[l-1]);
                    do{r--;}while(l<r && a[r]==a[r+1]);
                }
            }
        }
    }
    return res;
}
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>> res;
    res=FourSum(v,t);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[0].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
}
/*Time Complexity:O(n^3)
Space Complexity:O(1)*/
