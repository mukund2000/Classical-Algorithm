#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int numberOfPaths(int m,int n)
{
    vector<int> dp(n,1);
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            dp[j]+=dp[j-1];
        }
    }
    return dp[n-1];
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<numberOfPaths(m,n);
}
/**Time Complexity:O(mn)
Space Complexity:O(n)**/
