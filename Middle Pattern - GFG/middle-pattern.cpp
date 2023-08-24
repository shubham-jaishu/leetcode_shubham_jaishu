//{ Driver Code Starts
#include <iostream>
using namespace std;

void printPattern(string s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	printPattern(s);
	cout<<endl;
	
}
	
	return 0;
}
// } Driver Code Ends

    void printPattern(string s){
        int x=s.size()/2;
        string str;
        for(int i=x; i<s.size(); i++){
            str+=s[i];
            cout<<str<<'$'<<" ";
        }
        for(int i=0; i<x; i++){
            str+=s[i];
            cout<<str<<'$'<<" ";
        }
    }
