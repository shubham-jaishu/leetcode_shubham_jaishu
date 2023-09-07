//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int minimumMultiplications(vector<int>& arr, int start, int end) {
        if(start==end)
            return 0;
        bool vis[100001]={false};
        queue<int> q;
        q.push(start);
        int ans=1;
        vis[start]=true;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int src=q.front();
                q.pop();
                for(int x:arr){
                    int v=(src*x)%100000;
                    if(v==end)
                        return ans;
                    if(!vis[v])
                        vis[v]=true,q.push(v);
                }
            }
            ans++;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends