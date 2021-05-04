#include<bits/stdc++.h>
using namespace std;
int Conversion(int dec)
{
    int rem=0,oct=0;
    int coun = 1;
    while(dec>0)
    {
        rem = dec%8;
        oct += rem*coun;
        coun*=10;
        dec = dec/8;
    }
    return oct;
}
int main()
{
    int dec;
    cin>>dec;
    cout<<Conversion(dec)<<endl;
}
