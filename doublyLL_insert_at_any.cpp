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

node* iatbeg(node*head,int pos,int new_data)
{
	
	
	node* newnode= new node(new_data);
	    newnode->next = head;
    newnode->prev = NULL;

		if(!head) return head->prev=newnode;
	
	
		node*curr=head;
	for(int i =1;i<pos-1 &&curr!=NULL; i++)
		{
			curr=curr->next;	
		}
		
		  // If the position is out of bounds
    if (curr == NULL) {
        cout << "Position is out of bounds." << endl;
        delete newnode;
        return head;
    }
			
			newnode->prev=curr;
			newnode->next=curr->next;
			curr->next=newnode;
	if(newnode->next->next!=NULL)
	{
		newnode->next->prev=newnode;
	}


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
   node *head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(4);
    head->next->next->prev = head->next;
    // Print the original list
    cout << "Original Linked List:";
    printList(head);

    // Insert a new node at the front of the list
    cout << "After inserting Node at the front:";
    int data = 3;
    int pos=2;
    head = iatbeg(head, pos,data);

    // Print the updated list
    printList(head);

    return 0;
}
