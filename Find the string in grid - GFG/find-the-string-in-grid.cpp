//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
   vector<vector<int>> d={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
   bool check(int x, int y,int i,vector<vector<char>>&grid,string &word, vector<int> &v)
   {
       if(i==word.length()) return true;
       if(x<0 or y<0 or x>=grid.size() or y>=grid[0].size() or grid[x][y]!=word[i]) return false;
       return check(x+v[0],y+v[1],i+1,grid,word,v);
   }
   
vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    vector<vector<int>> ans;
    for(int i=0;i<grid.size();i++)
    for(int j=0;j<grid[0].size();j++)
    if(grid[i][j]==word[0])
        for(auto &v:d)
            if(check(i,j,0,grid,word,v))
            {
                ans.push_back({i,j});
                break;
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends