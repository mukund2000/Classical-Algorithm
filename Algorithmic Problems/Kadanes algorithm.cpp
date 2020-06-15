#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxSubArraySum(int a[],int n)
{
    int meh=0,msf=INT_MIN,i,start=0,end=0,s=0;
    for(i=0;i<n;i++)
    {
        meh+=a[i];
        if(meh>msf)
        {
            msf=meh;
            start=s;
            end=i;
        }
        if(meh<0)
        {
            meh=0;
            s=i+1;
        }
    }
    cout<<"Starting index is "<<start<<" and ending index is"<<end<<"\n";
    return msf;
}
int main()
{
    int arr_size;
    cout<<"Enter the size of array\n";
    cin>>arr_size;
    cout<<"Enter the element in array\n";
    int arr[arr_size];
    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    int sum=MaxSubArraySum(arr,arr_size);
    cout<<sum<<"\n";
    return 0;
}
