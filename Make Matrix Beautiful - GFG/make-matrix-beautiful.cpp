//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findMinOpeartion(vector<vector<int>>mat , int n){
        int mx=INT_MIN , t=0;
        for(int i=0; i<n; i++){
            int r=0 , c=0;
            for(int j=0; j<n; j++){
                r+=mat[i][j];
                c+=mat[j][i];
                t+=mat[i][j];
            }
            mx=max(mx,max(r,c));
        }
        return mx*n-t;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends