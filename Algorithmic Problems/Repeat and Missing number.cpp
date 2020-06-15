#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MissingNumber(int arr[],int n)
{
    int expectedsum=(n*(n+1))/2;
    int actualsum=0;
    for(int i=0;i<n;i++)
    {
        actualsum+=arr[i];
    }
    return expectedsum-actualsum;
}
vector<int> RepeatedMissing(int arr[],int n)
{
    int sum_N=(n*(n+1))/2;
    int sum_sq=(n*(n+1)*(2*n+1))/6;
    for(int i=0;i<n;i++)
    {
        sum_N-=arr[i];
        sum_sq-=(arr[i]*arr[i]);
    }
    int missing=(sum_N+sum_sq/sum_N)/2;
    int repeating=missing-sum_N;
    vector<int> ans;
    ans.push_back(missing);
    ans.push_back(repeating);
    return ans;
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
    MissingNumber(arr,arr_size);
    vector<int> res=RepeatedMissing(arr,arr_size);
    for(int x:res)
        cout<<x<<"\n";
    return 0;
}
