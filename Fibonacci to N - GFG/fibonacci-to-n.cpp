//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector <int> nFibonacci(int n){
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        for(int i=0; v.back()<=n; i++){
            v.push_back(v[i]+v[i+1]);
        }
        v.pop_back();
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}
// } Driver Code Ends