#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		node(int new_data)
		{
			this->data=new_data;
			this->next= NULL;
		}
};
node*insertatfirst(node*head,int new_data)
{
	node*new_node= new node(new_data);
	new_node->next=head;
	return new_node;
}
void print(node*head)
{
	node*curr=head;
	while(curr!=NULL)
	{
		cout<<" "<<curr->data;
	
	curr=curr->next;
}

cout<<endl;
}
int main()
{
	int target=20;
	node*head=new node(10);
	head->next=new node(20);
	head->next->next =new node(30);
	cout<<"original list"<<endl;
	print(head);
	cout<<endl;
	
	cout<<"after"<<endl;
	int data=5;
	head=insertatfirst(head,data);
	print(head);

	return 0;
	
	
	
	
}
