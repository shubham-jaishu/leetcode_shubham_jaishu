//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool is(int n){
        while(n){
            if(n%10==4){
                return true;
            }
            n/=10;
        }
        return false;
    }
  
    int countNumberswith4(int n){
        int c=0;
        for(int i=1; i<=n; i++){
            if(is(i)){
                c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends