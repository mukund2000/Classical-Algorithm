#include<bits/stdc++.h>
using namespace std;
int FindIndex(int a[],int p,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p,q;
    cin>>p>>q;
    cout<<FindIndex(a,p,n)<<endl;
    cout<<FindIndex(a,q,n)<<endl;
}
