//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
public:
    vector<int> findTwoElement(vector<int>a , int n){
        unordered_map<int,int>mp;
        for(auto i:a){
            mp[i]++;
        }
        vector<int>v;
        for(auto i:mp){
            if(i.second>1){
                v.push_back(i.first);
                break;
            }
        }
        vector<int>num(n+1);
        for(int i=0; i<n; i++){
            num[a[i]]=1;
        }
        for(int i=1; i<=n; i++){
            if(num[i]==0){
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends