// C++ program to count 2s from 0 to n
#include <bits/stdc++.h>
using namespace std;

/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d);
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number);

// Driver Coden
int main()
{
    long long int n;
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << numberOf2sinRange(n) << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d)
{
    long long int powof10=(int)pow(10,d);
    long long int nextpowof10=powof10*10;
    long long int right=number%powof10;
    long long int rounddown=number-number%nextpowof10;
    long long int roundup=rounddown+nextpowof10;
    long long int digit=(number/powof10)%10;
    if(digit<2)
    return rounddown/10;
    if(digit==2)
    return rounddown/10+right+1;

    return roundup/10;
// Your code goes here
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
    long long int count=0;
    stringstream conv;
    conv<<number;
    string s=conv.str();
    long long int n=s.length();
    for(long long int i=0;i<n;i++)
    {
        count+=count2sinRangeAtDigit(number,i);
    }
    return count;
// Your code goes here
}
