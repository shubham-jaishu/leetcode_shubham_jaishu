//{ Driver Code Starts
// C++ program for pendulum arrangement of numbers
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

    vector<int> pendulumArrangement(int arr[] , int n){
        sort(arr,arr+n,greater<>());
        vector<int>v(n),u(n);
        int i=0 , j=0;
        while(i<n/2){
            v[i]=arr[j++];
            v[n-1-i]=arr[j++];
            i++;
        }
        if(n%2){
            v[n/2]=arr[j];
            return v;
        }
        i=0 , j=0;
        while(i<n/2){
            u[n-1-i]=arr[j++];
            u[i]=arr[j++];
            i++;
        }
        return u;
    }


//{ Driver Code Starts.

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = pendulumArrangement(arr, n);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends