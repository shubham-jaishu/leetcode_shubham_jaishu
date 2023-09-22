//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> vec;
   int low = 0, high = n - 1;
   
   while(low <= high)
   {
       if(arr[low] != x) low++;
       if(arr[high] != x) high--;
       if(arr[low] == x && arr[high] == x) 
       {
           vec.push_back(low);
           vec.push_back(high);
           break;
       }
   }
   if(low > high)
       vec.push_back(-1),
       vec.push_back(-1);
       
   return vec;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends