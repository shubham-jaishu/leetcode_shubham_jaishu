//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[] , int n){
        int mx=0 , co=0 , one=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                co++;
            }
            else{
                co--;
                one++;
            }
            mx=max(mx,co);
            if(co<0){
                co=0;
            }
        }
        return one+mx;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends