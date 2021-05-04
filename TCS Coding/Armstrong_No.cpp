#include<bits/stdc++.h>
using namespace std;
bool CheckArmstrong(int n)
{
    int i=n,sum=0,rem;
    while(i>0)
    {
        rem = i%10;
        sum += (rem*rem*rem);
        i/=10;
    }
    if(sum==n)
        return true;
    else
        return false;
}
int main()
{
    int l,u;
    cin>>l>>u;
    for(int i=l;i<=u;i++)
    {
        if(CheckArmstrong(i))
        cout<<i<<endl;
    }
}
