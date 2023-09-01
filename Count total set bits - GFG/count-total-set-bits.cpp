//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    int mx(int n){
        int i=0;
        while((1<<i)<=n){
            i++;
        }
        return i-1;
    }
    
    int countSetBits(int n){
        if(n==0){
            return 0;
        }
        int x = mx(n);
        int ans = x*(1<<(x-1))+(n-(1<<x))+1+countSetBits(n-(1<<x));
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends