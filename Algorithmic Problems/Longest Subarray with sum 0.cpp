#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int>& v)
{
    int n=v.size();
    int m=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=v[j];
            if(sum==0)
                m=max(m,j-i+1);
        }
    }
    return m;
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
/*Time Complexity:O(n^2)
Space Complexity:O(1)*/
