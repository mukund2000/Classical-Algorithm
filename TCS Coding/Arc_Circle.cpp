#include<bits/stdc++.h>
using namespace std;
int main()
{
    float rad,angle;
    cin>>rad>>angle;
    float len;
    len = 2 * 3.14*rad*(angle/360);
    printf("%.2f",len);
}
