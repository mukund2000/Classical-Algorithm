#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintPascal(int n)
{
    for(int i=1;i<=n;i++)
    {
        int c=1;
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    PrintPascal(n);
}
/**Time Complexity:O(n^2)
Space Coomplexity:O(1)**/
