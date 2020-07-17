#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack :: sort()
{
    stack<int> temps;
    while(!s.empty())
    {
        int tmp=s.top();
        s.pop();

        while(!temps.empty()&&temps.top()<tmp)
        {
            s.push(temps.top());
            temps.pop();
        }
        temps.push(tmp);
    }
    while(!temps.empty())
    {
        s.push(temps.top());
        temps.pop();
    }
   //Your code here
}
/*Expected Time Complexity : O(N*N)
Expected Auixilliary Space : O(N) recursive.*/
