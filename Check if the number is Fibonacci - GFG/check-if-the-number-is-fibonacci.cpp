//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int n){
        long long x = 5*n*n-4;
        long long y = 5*n*n+4;
        
        long long a = sqrt(x);
        long long b = sqrt(y);
        
        if(a*a==x || b*b==y){
            return "Yes";
        }
        return "No";
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
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends