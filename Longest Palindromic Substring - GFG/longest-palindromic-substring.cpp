//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:

    bool is(string s){
        string r = s;
        reverse(r.begin(),r.end());
        return r==s;
    }

    string longestPalindrome(string s){
        vector<string>v;
        for(int i=0; i<s.size(); i++){
            string t;
            for(int j=i; j<s.size(); j++){
                t+=s[j];
                if(is(t)){
                    v.push_back(t);
                }
            }
        }
        int mx=0;
        for(auto i:v){
            int sz;
            sz=i.length();
            mx=max(mx,sz);
        }
        for(auto i:v){
            if(i.size()==mx){
                return i;
            }
        }
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends