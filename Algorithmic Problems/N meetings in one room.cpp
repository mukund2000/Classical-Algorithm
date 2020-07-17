#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
};
bool comp(struct meeting m1,meeting m2)
{
    return m1.end<m2.end;
}
void maxmeetings(vector<int>& s,vector<int>& f,int n)
{
    struct meeting meet[n];
    for(int i=0;i<n;i++)
    {
        meet[i].start=s[i];
        meet[i].end=f[i];
        meet[i].pos=i+1;
    }
    sort(meet,meet+n,comp);
    vector<int>m;
    m.push_back(meet[0].pos);
    int limit=meet[0].end;
    for(int i=1;i<n;i++)
    {
        if(meet[i].start>=limit)
        {
            m.push_back(meet[i].pos);
            limit=meet[i].end;
        }
    }
    for(int i=0;i<m.size();i++)
    {
        cout<<m[i]<<" ";
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> s(n),f(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>f[j];
        }
        maxmeetings(s,f,n);
        cout<<"\n";
    }
	//code
	return 0;
}
/*Time Complexity: O(N log(N))*/
