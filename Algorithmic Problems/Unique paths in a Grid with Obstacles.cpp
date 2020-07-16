#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int UniquePath(vector<vector<int>> &a)
{
    int R=a.size();
    int C=a[0].size();
    if(a[0][0]==1)
        return 0;
    a[0][0]=1;
    for(int i=1;i<R;i++)
    {
        a[i][0]=(a[i][0]==0&&a[i-1][0]==1)?1:0;
    }
    for(int i=1;i<C;i++)
    {
        a[0][i]=(a[0][i]==0&&a[0][i-1]==1)?1:0;
    }
    for(int i=1;i<R;i++)
        {
            for(int j=1;j<C;j++)
            {
                if(a[i][j]==0)
                {
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
                else
                {
                    a[i][j]=0;
                }
            }
        }
        return a[R-1][C-1];
}
int main()
{
    int a={{0,0,0},{0,1,0},{0,0,0}};
    cout<<UniquePath(a);
}
