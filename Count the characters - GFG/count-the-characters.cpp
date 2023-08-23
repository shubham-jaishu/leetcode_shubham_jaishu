//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int getCount (string s , int n){
        string str;
        int i=0 , c=0;
        while(i<s.size()){
            int ch = s[i];
            str+=s[i];
            while(s[i]==ch){
                i++;
            }
        }
        unordered_map<char,int>mp;
        for(auto i:str){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==n){
                c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends