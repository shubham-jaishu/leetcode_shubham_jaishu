//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int waitingTime(int n , int x){
        vector<int>v,u;
        int sum=0 , mum=0;
        for(int i=0; i<n; i++){
            v.push_back(sum);
            sum+=x;
        }
        for(int i=0; i<n; i++){
            u.push_back(mum);
            mum+=10;
        }
        if(u[u.size()-1]>v[v.size()-1]){
            return u[u.size()-1]-v[v.size()-1];
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int N, X;
        cin>>N>>X;
        
        Solution ob;
        cout<<ob.waitingTime(N, X)<<"\n";
    }
    return 0;
}
// } Driver Code Ends