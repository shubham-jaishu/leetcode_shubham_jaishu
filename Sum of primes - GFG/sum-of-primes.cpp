//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:

    bool is(int n){
        return n==2 || n==3 || n==5 || n==7;
    }

    int primeSum(int n){
        int sum=0;
        while(n){
            if(is(n%10)){
                sum+=n%10;
            }
            n/=10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends