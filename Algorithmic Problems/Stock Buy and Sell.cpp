// https://www.techiedelight.com/maximum-profit-earned-buying-and-selling-shares/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxProfit(int price[],int n)
{
    int profit=0;
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(price[i-1]>price[i])
            j=i;
        if(price[i-1]<price[i] && (i+1==n || (price[i]>price[i+1])))
        {
            profit+=(price[i]-price[j]);
        }
    }
    return profit;
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
    cout<<"Profit is:"<<MaxProfit(a,n)<<"\n";
}
/**Time Complexity:O(n)
Space Complexity:O(1)**/
