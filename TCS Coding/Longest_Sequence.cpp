#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max = 0,lmx=0,mmx=0,count=1,lcurr=0,mcurr=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
            count++;
        else
        {
            mcurr=i;
            if(max<count)
            {
                max=count;
                count=1;
                lmx=lcurr;
                mmx = mcurr;
                lcurr = mcurr+1;
            }
        }
    }
    for(int i=lmx;i<=mmx;i++)
    {
        cout<<a[i]<<" ";
    }
}
