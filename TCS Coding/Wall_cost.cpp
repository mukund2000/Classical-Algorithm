/*
We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.

Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior 4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet

If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.

Calculate and display the total cost of painting the property
Example 1:

6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,inP=18,exP=12;
    cin>>n>>m;
    float temp,cost=0;
    if(n==0 && m==0)
    {
        cout<<"Total Estimated cost: "<<0<<endl;
    }
    else if(n<0 || m<0)
        cout<<"Invalid Input\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            cost+=inP*temp;
        }
        for(int i=0;i<m;i++)
        {
            cin>>temp;
            cost+=exP*temp;
        }
        cout<<"Total Estimated cost: "<<cost<<endl;
    }
}
