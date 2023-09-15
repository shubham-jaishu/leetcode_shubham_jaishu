//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// Using recursion + Memoization

class Solution{
public:
    int subSetSum(int n, int arr[], int sum, vector<vector<int>> &dp){
        if(n == 0) return 0;
        if(sum == 0) return 1;
        
        if(dp[n][sum] != -1) return dp[n][sum];
        
        if(arr[n-1] <= sum){
            return dp[n][sum] = subSetSum(n-1, arr, sum-arr[n-1], dp) || subSetSum(n-1, arr, sum, dp);
        }
        else return dp[n][sum] = subSetSum(n-1, arr, sum, dp);
    }

    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        
        vector<vector<int>> dp(N+1, vector<int>(sum/2+1, -1)); // O(N x sum)
        
        if(sum % 2 != 0)
            return 0;
        else
            return subSetSum(N, arr, sum/2, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends