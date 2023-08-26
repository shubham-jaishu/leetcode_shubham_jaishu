//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
    public:
    
    int solve(vector<int>&v , int idx , int k){
        if(v.size()==1){
            return v[0];
        }
        idx = (idx+k-1)%v.size();
        v.erase(v.begin()+idx);
        solve(v , idx , k);
    }
    
    int josephus(int n, int k){
        vector<int>v;
        for(int i=1; i<=n; i++){
            v.push_back(i);
        }
        return solve(v , 0 , k);
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends