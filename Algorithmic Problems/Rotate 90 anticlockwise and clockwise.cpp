#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void Transpose(int arr[R][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=i;j<C;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void ReverseAnti(int arr[R][C])
{
    int i,j,k;
    for(i=0;i<R;i++)
    {
        for(j=0,k=R-1;j<k;j++,k--)
        {
            swap(arr[j][i],arr[k][i]);
        }
    }
    cout<<"AntiClockWise Rotation of matrix\n";
     for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void ReverseClock(int arr[R][C])
{
    int i,j,k;
    for(i=0;i<R;i++)
    {
        for(j=0,k=R-1;j<k;j++,k--)
        {
            swap(arr[i][j],arr[i][k]);
        }
    }
    cout<<"ClockWise Rotation of matrix\n";
     for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void RotateClock(int arr[R][C])
{
    Transpose(arr);
    ReverseClock(arr);
}
void RotateAntiClock(int arr[R][C])
{
    Transpose(arr);
    ReverseAnti(arr);
}
int main()
{
    cout<<"Enter number of rows and column\n";
    cout<<R<<" "<<C<<"\n";
    int arr[R][C],i,j;
    cout<<"Enter matrix element\n";
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cin>>arr[i][j];
        }
    }
    RotateClock(arr);
    RotateAntiClock(arr);
}
/**Time Complexity:O(R*C)
Space Complexity:O(1)**/
