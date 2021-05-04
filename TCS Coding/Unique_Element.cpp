#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    map<int,int>::iterator itr;
    for(itr = mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second==1)
            cout<<itr->first<<endl;
    }
}
