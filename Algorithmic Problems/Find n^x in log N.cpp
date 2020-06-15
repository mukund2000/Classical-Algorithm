#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int POW(double x,int n)
{
    if(n==0)
            return 1;
        if(n==INT_MIN)
        {
            x=x*x;
            n=n/2;
        }
        if(n<0)
        {
            n=-n;
            x=1/x;
        }
        return (n%2==0)?POW(x*x,n/2):x*POW(x*x,n/2);
}
int main()
{
    int n;
    double x;
    cin>>x>>n;
    cout<<POW(x,n);
}
/**Time Complexity:O(logN)
Space Complexity:O(1)**/
