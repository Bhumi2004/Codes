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

node*deleteat(node*last,int key)
{
	if(last==NULL)
	return NULL;
	
	node*head=last->next;
	node*prev=last;
	if(head==last && head->data==key)
	{
		delete head;
		return NULL;
		
	}
    if(head->data==key)
    {
    	last->next=head->next;
    	    	delete head;
return last;
	}
	
while(head!=last && head->data!=key)
{
	prev=head;
	head=head->next;
}
if(head->data!=key) return last;

	prev->next=head->next;
	if(head==last)
	{
		last=prev;
	}
	delete head;

	
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
    int key = 3;
    last = deleteat(last,key);

    cout << "List after deleting first node: ";
    print(last);

    return 0;
}








