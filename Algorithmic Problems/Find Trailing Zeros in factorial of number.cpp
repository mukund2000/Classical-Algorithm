#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int TrailingZeroes(int n)
{
    long long count=0;
    for(long long i=5;n/i>=1;i*=5)
    {
        count+=(n/i);
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<TrailingZeroes(n);
}
/**Time Complexity:O(logN)
Space Complexity:O(1)**/
