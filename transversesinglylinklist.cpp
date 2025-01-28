#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		node(int data)
		{
			this->data=data;
			this->next= NULL;
		}
};
int size(node*head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}
	return len;
}
int search(node*head, int target)
{
	while(head!=NULL)
	{
		if(head->data==target)
		{
			return true;
		}
		head=head->next;
	}
	return false;
}
void trans(node*head)
{
	if(NULL==head)
	{
		cout<<endl;
		return;
	}
	cout<<head->data<<"->";
	trans(head->next);
}
int main()
{
	int target=20;
	node*head=new node(10);
	head->next=new node(20);
	head->next->next =new node(30);
	trans(head);
	cout<<search(head,target)<<endl;
	cout<<size(head);
	return 0;
	
	
	
	
}
