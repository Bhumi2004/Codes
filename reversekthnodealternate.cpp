#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};


int getlength(Node*head)
{
	int c=0;
	while(head)
	{
		head=head->next;
		c++;
	}
	return c;
}


Node* reverse(Node*head,int k)
{
	int length = getlength(head);
	if(!head || k==1 )
	{
		return head;
	}
	
	Node dummy(0);
	dummy.next=head;
	Node * pge=&dummy, *curr=head;
	
	while(length>0)
	{
		Node*start=curr, *prev=NULL,*next=NULL;
		int G= min(k,length);
		for(int i=0;i<G;i++)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		
		pge->next=prev;
		pge=start;
		length=length-G;
		
		
		for(int i=0;i<k && curr;i++)
		{
			pge->next=curr;
			pge=curr;
			curr=curr->next;
			length--;
		}
	}
	
	return dummy.next;
}


void insert(Node* &head, int val)
{
	if(!head)
	{
		head=new Node(val);
		return;
	}
	Node*temp=head;
	while(temp->next) temp=temp->next;
	temp->next=new Node(val);
}

// Function to print a linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
// Driver code
int main() {
    Node* head = NULL;
    
    for (int i = 1; i <= 10; i++)
        insert(head, i);
    
    int k = 3;
    cout << "Original List: ";
    printList(head);

    head = reverse(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}

