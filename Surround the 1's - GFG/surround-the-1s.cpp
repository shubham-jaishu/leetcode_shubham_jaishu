//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:

    bool is(int n, int m, int i, int j) {
      return i >= 0 && i < n && j >= 0 && j < m;
    }

  int Count(vector < vector < int >> & mat) {
    int n = mat.size(), m = mat[0].size(), c, ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        c = 0;
        if (mat[i][j] == 1) {
          if (is(n, m, i - 1, j - 1) && mat[i-1][j-1] == 0) {
            c++;
          }
          if (is(n, m, i + 1, j + 1) && mat[i+1][j+1] == 0) {
            c++;
          }
          if (is(n, m, i - 1, j + 1) && mat[i-1][j+1] == 0) {
            c++;
          }
          if (is(n, m, i + 1, j - 1) && mat[i+1][j-1] == 0) {
            c++;
          }

          if (is(n, m, i, j - 1) && mat[i][j-1] == 0) {
            c++;
          }
          if (is(n, m, i, j + 1) && mat[i][j+1] == 0) {
            c++;
          }
          if (is(n, m, i - 1, j) && mat[i-1][j] == 0) {
            c++;
          }
          if (is(n, m, i + 1, j) && mat[i+1][j] == 0) {
            c++;
          }
          if (c % 2 == 0 && c != 0) {
            ans++;
          }
        }

      }
    }
    return ans;
  }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends