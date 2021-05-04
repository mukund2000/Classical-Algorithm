#include<bits/stdc++.h>
using namespace std;
int expo(int n,int p)
{
    if(p==0)
        return 1;
    if(n&1)
        return n*expo(n,p/2)*expo(n,p/2);
    else
        return expo(n,p/2)*expo(n,p/2);
}
int main()
{
    int num,exp;
    cin>>num>>exp;
    cout<<expo(num,exp);
}
