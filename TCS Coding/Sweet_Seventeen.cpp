#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    map<char,int> mp;
    mp.insert({'a',10});
    mp.insert({'b',11});
    mp.insert({'c',12});
    mp.insert({'d',13});
    mp.insert({'e',14});
    mp.insert({'f',15});
    mp.insert({'g',16});
    int inc=0;
    int num=0;
    for(int i=n-1;i>=0;i--)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))
        {
            num+= mp[s[i]] * pow(17,inc++);
        }
        else
        {
            num+= ((int)s[i] - (int)'0')*pow(17,inc++);
        }
    }
    cout<<num<<endl;
}
