#include<bits/stdc++.h>
using namespace std;
double FindSQRT(double n,double i,double j)
{
    double mid = (i+j)/2;
    if(mid*mid == n || (abs(mid*mid - n)<0.00001))
        return mid;
    else if(mid*mid < n)
        return FindSQRT(n,mid,j);
    else
        return FindSQRT(n,i,mid);
}
int main()
{
    double n,i=0;
    cin>>n;
    while(true)
    {
        if(i*i==n)
        {
            cout<<i<<endl;
            break;
        }
        else if(i*i>n)
        {
            printf("%.2lf",FindSQRT(n,i-1,i));
            break;
        }
        i++;
    }
}
