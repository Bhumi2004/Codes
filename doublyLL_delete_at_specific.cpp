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

node* iatbeg(node*head, int pos)
{
	
	

	  

		if(!head) return head;

	
		node*curr=head;
    for(int i=1;curr &&i< pos;++i)
    {
    	
    	curr=curr->next;
	}
	
	if(!curr)
	return head;
	
	if(curr->prev)
	curr->prev->next=curr->next;
	
	if(curr->next)
	curr->next->prev=curr->prev;
	
	if(head==curr)
		head=curr->next;
	
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
node * head = new node(1);
    head -> next = new node(2);
    head -> next -> prev = head;
    head -> next -> next = new node(3);
    head -> next -> next -> prev = head -> next;

    cout << "Original Linked List: ";
    printList(head);

    cout << "After Deletion at the position 2: ";
    head = iatbeg(head, 2);

    printList(head);

    return 0;
}
