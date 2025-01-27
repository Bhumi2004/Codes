#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};

node* insertatend(node*head,int new_data)
{

	node*new_node= new node(new_data);
	
		if(head==NULL)
{	return new_node;}

  node*temp=head;
  while(temp->next!=NULL)
  {
     temp=temp->next;
 }
	temp->next=new_node;
	return head;
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<" "<<head->data;
		
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	
	node*head =new node(10);
	head->next= new node(20);
	head->next->next=new node(30);
	cout<<"before"<<endl;
	print(head);
	cout<<"after"<<endl;
	int data =40;
	head=insertatend(head,data);
	print(head);
	return 0;
}
