#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& a)
{
    int n=a.size(),k,l;
    for(k=n-2;k>=0;k--)
    {
        if(a[k]<a[k+1])
            break;
    }
    if(k<0)
    {
        reverse(a.begin(),a.end());
    }
    else
    {
        for(l=n-1;l>k;l--)
        {
            if(a[l]>a[k])
                break;
        }
        swap(a[k],a[l]);
        reverse(a.begin()+k+1,a.end());
    }
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
    nextPermutation(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
