/*
There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M less than or equal to N. Candies are served to the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.

Output should give number of Candies sold and updated number of Candies in JAR.

If Input is more than candies in JAR, return: “INVALID INPUT”

Given,

N=10, where N is NUMBER OF CANDIES AVAILABLE

K less than or equal to 5, where k is a number of minimum candies that must be inside JAR ever.

Example 1:(N = 10, k less than or equal to 5)

Input Value
3
Output Value
NUMBER OF CANDIES SOLD : 3
NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, k less than or equal to 5)

Input Value
0
Output Value
INVALID INPUT
NUMBER OF CANDIES LEFT : 10
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sold;
    cin>>sold;
    int n=10,k=5;
    if(sold==0)
    {
        cout<<"Invalid Input"<<endl;
        cout<<"Number of Candies Available: "<<n<<endl;
    }
    else if(sold<k)
    {
        cout<<"Number of Candies Sold: "<<sold<<endl;
        cout<<"Number of Candies Available: "<<n-sold<<endl;
    }
    else if(sold>=k)
    {
        cout<<"Number of Candies Sold: "<<sold<<endl;
        cout<<"Number of Candies Available: "<<n<<endl;
    }
}
