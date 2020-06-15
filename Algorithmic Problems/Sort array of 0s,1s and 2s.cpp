#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Function to sort the array of 0s, 1s and 2s
void SortArray(int arr[],int n)
{
    int i,count0=0,count1=0,count2=0;
    //Count the number of 0s, 1s and 2s in the array
    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0: count0++;
            break;
            case 1: count1++;
            break;
            case 2: count2++;
            break;
        }
    }
    // update array
    i=0;
    //Store all the 0s in the beginning
    while(count0>0)
    {
        arr[i++]=0;
        count0--;
    }
    // Then all the 1s
    while(count1>0)
    {
        arr[i++]=1;
        count1--;
    }
    //  Finally all the 2s
    while(count2>0)
    {
        arr[i++]=2;
        count2--;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
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
    SortArray(arr,arr_size);
    return 0;
}
/**Complexity Analysis:
Time Complexity: O(n).
Only two traversals of the array is needed.
Space Complexity: O(1).
As no extra space is required.**/
