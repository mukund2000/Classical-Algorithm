#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        z++;
        else
        o++;
    }
    for(int i=0;i<z;i++)
    {
        a[i]=0;
    }
    for(int i=z;i<n;i++)
    {
        a[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
