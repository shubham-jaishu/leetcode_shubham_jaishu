//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int> removeDuplicate(int a[] , int n){
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        vector<int>v;
        for(int i=0; i<n; i++){
            if(mp[a[i]]!=0){
                v.push_back(a[i]);
                mp[a[i]]=0;
                mp.erase(mp[a[i]]);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

// Driver method to test above method
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<int> v = ob.removeDuplicate(a, n);

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends