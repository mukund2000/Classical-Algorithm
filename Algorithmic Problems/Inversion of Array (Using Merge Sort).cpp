// https://www.techiedelight.com/inversion-count-array/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Naive Approach
/**Time complexity=O(n^2)
Space complexity=O(1)**/
int InversionCount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                count++;
        }
    }
    return count;
}
// using merge sort
/**Time complexity=O(nlogn)
Space complexity=O(n)**/
int mergeArr(int arr[],int aux[],int low,int mid,int high)
{

    int k=low,i=low,j=mid+1;
    int coun=0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
            aux[k++]=arr[i++];
        else
        {
            aux[k++]=arr[j++];
            coun+=(mid-i+1);
        }
    }
    while(i<=mid)
    {
        aux[k++]=arr[i++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=aux[i];
    }
    return coun;
}
int mergeSort(int arr[],int aux[],int low,int high)
{
    if(low==high)
        return 0;
    int mid=(low+((high-low)>>1));
    int inversion=0;
    inversion+=mergeSort(arr,aux,low,mid);
    inversion+=mergeSort(arr,aux,mid+1,high);
    inversion+=mergeArr(arr,aux,low,mid,high);
    return inversion;
}
int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n],aux[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        aux[i]=a[i];
    }
    cout<<"Inversion Count:"<<InversionCount(a,n)<<"\n";
    cout<<"Inversion Count using merge sort is:"<<mergeSort(a,aux,0,n-1)<<"\n";
}
