//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string encryptString(string s){
        string ans;
        int c=0;
        char ch = s[0];
        ans+=s[0];
        for(int i=0; i<s.size(); ){
            while(s[i]==ch){
                c++;
                i++;
            }
            ans+=to_string(c);
            c=0;
            ch=s[i];
            ans+=s[i];
        }
        return {ans.rbegin(),ans.rend()};
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends