//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:	
	int divisibleBy4 (string n){
        int x = n[n.size()-2]-'0';
        int y = n[n.size()-1]-'0';
        x=x*10+y;
        if(x%4==0){
            return true;
        }
        return false;
	}
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends