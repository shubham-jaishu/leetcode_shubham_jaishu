//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends

class Solution{
    public:
    Node *compute(Node*head){
        vector<int>v,ans;
        while(head){
            v.push_back(head->data);
            head=head->next;
        }
        int mx=v[v.size()-1];
        ans.push_back(mx);
        for(int i=v.size()-2; i>=0; i--){
            if(v[i]>=mx){
                ans.push_back(v[i]);
                mx=v[i];
            }
        }
        reverse(ans.begin(),ans.end());
        Node*temp=new Node(NULL) , *y=temp;
        for(auto i:ans){
            temp->next=new Node(i);
            temp=temp->next;
        }
        return y->next;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends