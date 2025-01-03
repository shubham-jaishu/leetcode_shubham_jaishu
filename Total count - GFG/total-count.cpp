//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int totalCount(int a[], int n, int k){
        int c=0;
        for(int i=0; i<n; i++){
            if(a[i]%k==0){
                c+=a[i]/k;
            }
            else{
                c+=a[i]/k+1;   
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends