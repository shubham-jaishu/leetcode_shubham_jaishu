//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V , vector<int>adj[]){
        vector<int>in(V);
        for(int i=0; i<V; i++){
            for(auto j:adj[i]){
                in[j]++;
            }
        }
        queue<int>q;
        for(int i=0; i<V; i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        int c=q.size();
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(auto i:adj[t]){
                in[i]--;
                if(in[i]==0){
                    q.push(i);
                    c++;
                }
            }
        }
        if(c==V){
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends