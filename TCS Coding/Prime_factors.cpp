#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(n>0)
    {
        if(n%i==0)
        {
            n/=i;
            cout<<i<<endl;
        }
        else
            i++;
    }
}
