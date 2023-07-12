//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool vo(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
  
    int isGoodorBad(string s){
        int v=0 , c=0;
        for(auto i:s){
            if(vo(i) || i=='?'){
                v++;
                if(v>5){
                    return 0;
                }
            }
            else{
                v=0;
            }
        }
        for(auto i:s){
            if(vo(i)==false || i=='?'){
                c++;
                if(c>3){
                    return 0;
                }
            }
            else{
                c=0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends