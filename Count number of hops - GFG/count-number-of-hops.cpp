//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
   long countWays(int n)
       {
          if(n==1)return 1;
          if(n==2)return 2;
          if(n==3)return 4;
          
          long prev1 = 1;
          long prev2 = 2;
          long prev3 = 4;
          long sum = 0;
          for(int i=3; i<n;i++)
          {
              sum = (prev1+prev2+prev3)%1000000007;
              prev1 = prev2;
              prev2= prev3;
              prev3=sum;
          }
          return prev3;
       }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends