#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// function for finding duplicate elements in array
void Duplicate_Element(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index=arr[i]%n;
        arr[index]+=n;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if((arr[i]/n)>1)
            cout<<i<<"\n";
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
    Duplicate_Element(arr,arr_size);
    return 0;
}
/**Complexity Analysis:
Time Complexity: O(n).
Only two traversal is needed. So the time complexity is O(n)
Auxiliary Space: O(1).
As no extra space is needed, so the space complexity is constant**/
