// https://www.techiedelight.com/find-maximum-difference-between-two-elements-array/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxDiff(int arr[],int n)
{
    int diff=INT_MIN;
    int msf=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>msf)
            msf=arr[i];
        else
        {
            diff=max(diff,msf-arr[i]);
        }
    }
    return diff;
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
    cout<<"difference is:"<<maxDiff(a,n)<<"\n";
}
/**Time Complexity:O(n)
Space Complexity:O(1)**/
