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
    sort(a,a+n);
    int sum,left=0,right=n-1;
    cin>>sum;
    while(left<right)
    {
        int curr_sum=a[left]+a[right];
        if(curr_sum>sum)
            right--;
        else if(curr_sum<sum)
            left++;
        else if(curr_sum==sum)
        {
            cout<<a[left]<<" "<<a[right]<<endl;
            left++;
            right--;
        }
    }

}
