//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

    bool findPair(int a[] , int n , int d){
        sort(a,a+n,greater<>());
        int l=0 , r=1;
        while(r<n){
            if(abs(a[l]-a[r])==d){
                return 1;
            }
            else if(a[l]-a[r]<d){
                r++;
            }
            else{
                if(r-l>1){
                    l++;
                }
                else{
                    r++;
                }
            }
        }
        return false;
    }