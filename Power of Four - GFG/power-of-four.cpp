//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    int isPowerOfFour(unsigned int n){
        long long h = 1;
        if(n==1){
            return 1;
        }
        for(int i=0; i<9999; i++){
            h*=4;
            if(h>n){
                return 0;
            }
            else if(h==n){
                return 1;
            }
            else{
                continue;
            }
        }    
        return 0;
    }
};

//{ Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}

// } Driver Code Ends