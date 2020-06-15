#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int NumberToTitle(string s)
{
    int result=0;
    for(auto &c:s)
    {
        result*=26;
        result+=(c-'A'+1);
    }
    return result;
}
int main()
{
    string s;
    cin>>s;
    cout<<NumberToTitle(s);
}
