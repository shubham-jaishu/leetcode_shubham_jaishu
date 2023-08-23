//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int totalJumps(int x , int y , int n , int arr[]){
        int c=0;
        for(int i=0; i<n; i++){
            int j=0;
            while(j<arr[i]){
                j+=x;
                c++;
                if(j>=arr[i]){
                    break;
                }
                j-=y;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, N;
        cin>>X>>Y>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.totalJumps(X, Y, N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends