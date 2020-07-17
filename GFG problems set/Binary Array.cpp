//Initial template for C++

#include <bits/stdc++.h>
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);


 // } Driver Code Ends


//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array
vector<int> SortBinaryArray(vector<int> binArray)
{
    int n=binArray.size(),count=0;
    for(int i=0;i<n;i++)
    {
        if(binArray[i]==0)
        count++;
    }
    for(int i=0;i<count;i++)
    {
        binArray[i]=0;
    }
    for(int i=count;i<n;i++)
    binArray[i]=1;
    return binArray;

    // Your code goes here
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);

	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];

	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";

	    cout<<endl;
	}
	return 0;
}
/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).*/
  // } Driver Code Ends
