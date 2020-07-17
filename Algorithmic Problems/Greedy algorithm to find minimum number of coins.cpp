#include <bits/stdc++.h>
using namespace std;
int deno[] = { 1, 2, 5, 10, 20,
               50, 100, 500, 1000 };
int n = sizeof(deno) / sizeof(deno[0]);
void findmin(int rup)
{
    sort(deno,deno+n);
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        while(rup>=deno[i])
        {
            rup-=deno[i];
            ans.push_back(deno[i]);
        }

    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int cur;
    cin>>cur;
    findmin(cur);
}
/*
    Time Complexity: O(N*logN).
    Auxiliary Space: O(1) as no additional space is used.
*/
