//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    int checkPower(int n){
        if(n==1){
            return 1;
        }
        for(int i=2 , r=sqrt(n); i<=r; i++){
            int t=i;
            while(t<n){
                t*=i;
            }
            if(t==n){
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPower(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends