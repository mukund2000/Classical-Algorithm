#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sq=(n*(n+1)*(2*n+1))/6;
        long long rec=(n*(n+1)/2)*(n*(n+1)/2);
        cout<<rec-sq<<"\n";
    }
	//code
	return 0;
}
