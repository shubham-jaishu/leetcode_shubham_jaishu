//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>ans;
    void solve(vector<vector<int>>mat , vector<vector<int>>&v , int i , int j , string s){
        if(i<0 || j<0 || i==mat.size() || j==mat.size() || mat[i][j]==0 || v[i][j]==1){
            return ;
        }
        if(i==mat.size()-1 && j==mat.size()-1){
            ans.push_back(s);
            return ;
        }
        v[i][j]=1;
        solve(mat , v , i+1 , j , s+'D');
        solve(mat , v , i-1 , j , s+'U');
        solve(mat , v , i , j+1 , s+'R');
        solve(mat , v , i , j-1 , s+'L');
        v[i][j]=0;
    }
    
    vector<string> findPath(vector<vector<int>>&mat , int n){
        vector<vector<int>>v(n,vector<int>(n,0));
        string s;
        if(mat[0][0]==0 || mat[n-1][n-1]==0){
            return ans;
        }
        solve(mat , v , 0 , 0 , s);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends