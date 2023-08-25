//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string canJump(long long n){
        int x = __builtin_popcount(n);
        if(x==1){
            return "True";
        }
        return "False";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}
// } Driver Code Ends