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

node*deleteat(node*last)
{
	if(last==NULL)
	return NULL;
	
	node*head=last->next;
	if(head==last)
	{
		delete last;
		return NULL;
	}
	node*curr=head;
while(curr->next!=last)
{
	curr=curr->next;
}
curr->next=head;
delete last;
last=curr;


	
	return last;
}

void print(node*last)
{
	if(last==NULL)
	return ;
	node*head=last->next;
	while(true)
	{
		cout<<head->data<<" ";
		head=head->next;
		if(head==last->next) break;
	}
	cout<<endl;
}

int main() {
    // Create circular linked list: 2, 3, 4
    node* first = new node(2);
    first->next = new node(3);
    first->next->next = new node(4);

    node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    print(last);

    // Delete the first node
    last = deleteat(last);

    cout << "List after deleting first node: ";
    print(last);

    return 0;
}








