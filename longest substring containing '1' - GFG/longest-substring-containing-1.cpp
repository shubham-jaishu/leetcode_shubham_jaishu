//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends

    int maxlength(string s){
        int mx=0 , c=0;
           for(int i=0; i<s.size(); i++){
               if(s[i]=='1'){
                    c++;
                    mx=max(mx,c);
               }
               else{
                   mx=max(mx,c);
                   c=0;
               }
           } 
           return mx;
    }