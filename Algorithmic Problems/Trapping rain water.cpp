#include<bits/stdc++.h>
using namespace std;
int Trap(int a[],int n)
{
    int lm=0,rm=0;
    int res=0,lo=0,hi=n-1;
    while(lo<=hi)
    {
        if(a[lo]<a[hi])
        {
            if(a[lo]>lm)
            lm=a[lo];
            else
            res+=lm-a[lo];
            lo++;
        }
        else
        {
            if(a[hi]>rm)
            {
                rm=a[hi];
            }
            else
            res+=rm-a[hi];
            hi--;
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<Trap(a,n)<<"\n";
    }
	//code

	return 0;
}
/*Complexity Analysis:
Time Complexity: O(n).
Only one traversal of the array is needed.
Auxiliary Space: O(1).
As no extra space is required.*/
