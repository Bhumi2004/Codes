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
node*deleteatend(node*head)
{
	if(head==NULL)
	return NULL;
	
	if(head->next==NULL)
	{
		delete head;
		return NULL;
	}
	node*temp=head;
	while(temp->next->next!=NULL)
		temp=temp->next;
		delete(temp->next);
		temp->next=NULL;
	


	return head;
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
	
	head=deleteatend(head);
	print(head);
	return 0;
	


	return 0;
	
	
	
	
}
