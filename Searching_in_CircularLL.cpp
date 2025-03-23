#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

node*findat(node*last,int key)
{
	if(last==NULL) return NULL;
	node*head=last->next;
	node*curr=head;
	while(curr!=last )
	{
		if(curr->data==key) cout<<"found"<<endl;
		curr=curr->next;
	}
	
	if(curr->data==key)
	{
		cout<<"found"<<endl;
	}
	else
	cout<<"not found"<<endl;
}


// Function to insert a node at the end of the circular linked list
node* insertEnd(node* last, int data) {
    node* newNode = new node(data);
    if (last == NULL) {
        newNode->next = newNode; // Circular reference
        return newNode;
    }
    newNode->next = last->next;
    last->next = newNode;
    return newNode;
}

// Driver function
int main() {
    node* last = NULL;

    // Creating a circular linked list: 1 -> 2 -> 3 -> 4 -> (back to 1)
    last = insertEnd(last, 1);
    last = insertEnd(last, 2);
    last = insertEnd(last, 3);
    last = insertEnd(last, 4);

    findat(last, 3); // Output: found
    findat(last, 5); // Output: not found

    return 0;
}
