//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long>v,u;
        long long pro=1;
        for(int i=1; i<29; i++){
            pro*=i;
            v.push_back(pro);
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]<=n){
                u.push_back(v[i]);
            }
            else{
                break;
            }
        }
        return u;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends