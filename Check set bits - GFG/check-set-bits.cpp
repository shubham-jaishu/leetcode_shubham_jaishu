//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int n){
        if(n==0){
            return 0;
        }
        for(int i=1; i<n; i++){
            if(n+1==pow(2,i)){
                return 1;
            }
            else if(n+1<pow(2,i)){
                return 0;
            }
        }
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
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends