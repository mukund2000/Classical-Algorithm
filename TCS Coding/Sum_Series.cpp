#include<bits/stdc++.h>
using namespace std;
float factorial(float n)
{
    float fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    float n;
    cin>>n;
    float sum=0;
    for(float i=1;i<=n;i++)
    {
        sum+=(i/factorial(i));
    }
    printf("%.6f",sum);
}
