//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    Node *sortedInsert(struct Node* head, int data) {
        
        Node* ans=new Node(data);
        if(head==NULL){
            
            return ans;
        }
        
        if(head->data>=data){
            
            ans->next=head;
            return ans;
            
        }
        
        Node* curr=head;
        Node* prev=NULL;
        
        while( curr!=NULL && curr->data<=data){
            
            prev=curr;
            curr=curr->next;
            
        }
        
        
        if(curr==NULL){
            prev->next=ans;
        }
        else{
            prev->next=ans;
                ans->next=curr;
        }

        return head;
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends