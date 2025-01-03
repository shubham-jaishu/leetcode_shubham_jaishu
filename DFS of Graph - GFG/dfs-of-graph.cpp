//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void solve(vector<int>adj[] , vector<int>&v , int i , vector<int>&ans){
        v[i]=1;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!v[j]){
                v[j]=1;
                solve(adj , v , j , ans);
            }
        }
    }
  
    vector<int> dfsOfGraph(int V , vector<int>adj[]){
        vector<int>v(V+1,0) , ans;
        solve(adj , v , 0 , ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends