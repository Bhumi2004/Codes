#include<iostream>
using namespace std;

struct node{
	int data;
	node*prev=NULL;
	node*next=NULL;
	node(int x)
	{
		this->data=x;
		this->next=NULL;
		this->prev=NULL;
	}
};

node* iatbeg(node*head)
{
	
	

	  

		if(!head) return NULL;
	if(head->next==NULL)
	{
		delete head;
		return NULL;
	}
	
		node*curr=head;
    while(curr->next!=NULL)
    {
    	curr=curr->next;
	}
	
	curr->next=NULL;
	delete curr;
	


return head;
}



void printList(node *head) {

    node *curr = head;
    while (curr != NULL) {
        cout << " " << curr->data;
        curr = curr->next;
    }
    cout << endl;
}
int main() {

    // Create a harcoded doubly linked list:
    // 2 <-> 3 <-> 4 -> NULL
   struct node *head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(3);
    head->next->next->prev = head->next;
    // Print the original list
    cout << "Original Linked List:";
    printList(head);

    // Insert a new node at the front of the list
    cout << "After inserting Node at the front:";
    
    head = iatbeg(head);

    // Print the updated list
    printList(head);

    return 0;
}
