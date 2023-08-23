//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int n){
        int c=0;
        if(n==1){
            return 1;
        }
        for(int i=1; i<n; i++){
            int l = pow(i,3);
            if(l<=n){
                for(int j=0; j<n; j++){
                    int r = pow(j,3);
                    if(l+r==n){
                        c++;
                    }
                    else if(l+r>n){
                        break;
                    }
                }
            }
            else{
                break;
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
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}
// } Driver Code Ends