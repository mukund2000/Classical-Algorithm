#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n;
    cin>>c>>n;
    char c2;
    if(islower(c))
    {
        c2 = 'a'+(c-'a'+n);
    }
    else
    {
        c2 = 'A'+(c-'A'+n);
    }
    cout<<c2<<endl;
}
