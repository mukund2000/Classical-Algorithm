#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct activity{
    int start;
    int finish;
};
bool comp(struct activity m1,activity m2)
{
    return m1.finish<m2.finish;
}
void maxactivities(activity a[],int n)
{
    sort(a,a+n,comp);
    int i=0;
    cout<<a[i].start<<" "<<a[i].finish<<"\n";
    for(int j=1;j<n;j++)
    {
        if(a[j].start>=a[i].finish)
        {
            cout<<a[j].start<<" "<<a[j].finish<<"\n";
            i=j;
        }
    }
}
int main() {
    activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},
                                       {5, 7}, {8, 9}};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxactivities(arr,n);
	//code
	return 0;
}
/*Time Complexity: O(N log(N))*/
