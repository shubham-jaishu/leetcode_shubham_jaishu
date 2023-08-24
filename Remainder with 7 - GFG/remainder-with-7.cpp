//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int remainderWith7(string n){
        int ans=0;
        for(auto i:n){
            ans = ans*10 + (i-'0');
            ans = ans%7;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends