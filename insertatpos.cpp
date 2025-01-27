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
node*insertatpos(node*head,int new_data,int pos)
{
	
	if(pos<1)
	return head;
	if(pos==1)
	{
		node*new_node= new node(new_data);
		new_node->next=head;
		return new_node;
		
	}
	node*temp=head;
  for(int i=1;i<pos-1 && temp!=NULL;i++)
  {
  	temp=temp->next;
  }
  if(temp==NULL)
  {
  	return head;
  }
  
  node*new_node=new node(new_data);
  new_node->next=temp->next;
  temp->next=new_node;
  return head;

}
void print(node*head)
{
	node*curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
	
	curr=curr->next;
}

cout<<endl;
}
int main()
{

	node*head=new node(10);
	head->next=new node(20);
	head->next->next =new node(30);

	
	int data=5;
	int pos=2;
	head=insertatpos(head,data,pos);
	print(head);

	return 0;
	
	
	
	
}
