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
node*insert(node*last,int data)
{
	node*newnode=new node(data);
	if(last==NULL)
	{
		newnode->next=newnode;
	}
	
	newnode->next=last->next;
	last->next=newnode;
	return last;
}

void print(node*last)
{
	if(last==NULL)return;
	node*head=last->next;
	 while (true) {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next)
            break;
    }
    cout << endl;
}

int main()
{
	node*first=new node(2);
	first->next=new node(4);
	first->next->next=new node(6);
	
    node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    print(last);

    // Insert 5 at the beginning
    last = insert(last, 5);

    cout << "List after inserting 5 at the beginning: ";
    print(last);
}
