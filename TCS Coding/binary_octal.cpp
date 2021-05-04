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
    int n;
    cin>>n;
    int num=0,rem=0,i=0;
    while(n>0)
    {
        rem=n%10;
        num+=rem*pow(2,i++);
        n/=10;
    }
    cout<<num<<endl;
    cout<<Conversion(num)<<endl;

}
