//{ Driver Code Starts
// CPP program to print the number which
// contain the digit d from 0 to n
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int d);


int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> v = solve(n, d);
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends

    bool is(int n , int x){
        string s;
        s+=to_string(n);
        for(int i=0; i<s.size(); i++){
            if((s[i]-'0')==x){
                return true;
            }
        }
        return false;
    }
                                 
    vector<int> solve(int n , int d){
           vector<int>v;
           for(int i=0; i<=n; i++){
               if(is(i,d)){
                   v.push_back(i);
               }
           }
           if(v.size()==0){
               return {-1};
           }
           return v;
    }