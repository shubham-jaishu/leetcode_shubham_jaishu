//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:	
	int isSame(string s){
        string str;
        int n=0;
        for(auto i:s){
            if(!isdigit(i)){
                str+=i;
            }
            else{
                n = n*10+(i-'0'); 
            }
        }
        if(str.size()==n){
            return 1;
        }
        return 0;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends