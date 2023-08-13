//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    int solve(int n , vector<int>&dp){
        if(n==0 || n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pre = solve(n-1 , dp);
        int pre2 = solve(n-2 , dp);
        return dp[n]=(pre+pre2)%1000000007;
    }
  
    int nthFibonacci(int n){
        vector<int>dp(n+1,-1);
        return solve(n , dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends