//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    int smallestSubWithSum(int arr[] , int n , int x){
        vector<int>v;
        int mn=INT_MAX;
        for(int i=0; i<n; i++){
            int sum=0 , j=i , c=0;
            while(j<n && sum<=x){
                sum+=arr[j++];
                c++;
            }
            if(sum<=x){
                continue;
            }  
            else{
                mn=min(mn,c);
            }
        }
        if(mn==INT_MAX){
            return 0;
        }
        return mn;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends