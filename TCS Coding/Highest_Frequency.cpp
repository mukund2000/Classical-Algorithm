#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    map<char,int>::iterator itr;
    int max=0;
    char res=' ';
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if(max<itr->second)
        {
            max=itr->second;
            res = itr->first;
        }
    }
    cout<<"Frequency of "<<res<<" is "<<max<<endl;
}
