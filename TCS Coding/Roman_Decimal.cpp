#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> mp;
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});
    mp.insert({'i',1});
    mp.insert({'v',5});
    mp.insert({'x',10});
    mp.insert({'l',50});
    mp.insert({'c',100});
    mp.insert({'d',500});
    mp.insert({'m',1000});
    int sum=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        if(i+1<n)
        {
            if(mp[c]>=mp[s[i+1]])
                sum+=mp[c];
            else
            {
                sum+=(mp[s[i+1]]-mp[c]);
                i++;
            }
        }
        else
        {
            sum+=mp[c];
        }
    }
    cout<<sum<<endl;
}
