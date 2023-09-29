//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(int i,int j,int n,int m,vector<vector<int>> &grid)
    {
        if(i<0 or j<0 or i>n or j>m or grid[i][j]==0){
            return;
        }
        grid[i][j]=0;
        solve(i-1,j,n,m,grid);
        solve(i+1,j,n,m,grid);
        solve(i,j-1,n,m,grid);
        solve(i,j+1,n,m,grid);
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] and (i==0 || j==0 || i==n-1 || j==m-1)){
                    solve(i,j,n-1,m-1,grid);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends