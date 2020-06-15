#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct interval
{
    int s,e;
};
bool comp(interval a,interval b)
{
    return a.s<b.s;
}
void MergeInterval(interval a[],int n)
{
    sort(a,a+n,comp);
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(a[index].e>=a[i].s)
        {
            a[index].e=max(a[index].e,a[i].e);
            a[index].s=min(a[index].s,a[i].s);
        }
        else
        {
            a[index]=a[i];
            index++;
        }
    }
    cout<<"Merged Intervals are:\n";
    for(int i=0;i<=index;i++)
    {
        cout<<a[i].s<<" "<<a[i].e<<"\n";
    }
}
int main()
{
    interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    MergeInterval(arr, n);
    return 0;
}
