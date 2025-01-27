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
	node*head=new node(10);
	head->next=new node(20);
	head->next->next =new node(30);
	trans(head);
	return 0;
	
	
	
	
}
