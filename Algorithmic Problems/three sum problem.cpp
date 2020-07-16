#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ThreeSum(vector<int>& v)
{
    sort(v.begin(),v.end());
    int n=v.size();
    vector<vector<int>> res;
    for(int i=0;i<n-2;i++)
    {
        if(i>0 && (v[i]==v[i-1]))
            continue;
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int sum=v[i]+v[l]+v[r];
            if(sum<0)
                l++;
            else if(sum>0)
                r--;
            else
            {
                res.push_back(vector<int>{v[i],v[l],v[r]});
                while(l+1<r &&v[l]==v[l+1])
                    l++;
                while(l<r-1 && v[r]==v[r-1])
                    r--;
                l++;
                r--;
            }
        }

    }
    return res;
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
    vector<vector<int>> res;
    res=ThreeSum(v);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[0].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
}
/*Time Complexity:O(n^2)
Space Complexity:O(1)*/
