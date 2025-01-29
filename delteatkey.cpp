#include<bits/stdc++.h>
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
node*d(node*head,int x)
{
	
	 if(head==NULL)
        {
            return head;
        }
        if(head->data==x)
        {
        	node*temp=head;
        	head=head->next;
        	delete temp;
        	return head;
		}
		node*temp=head;
		node*prev=NULL;
              
        while(temp!=NULL && temp->data!=x)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp!=NULL)
        {
        	prev->next=temp->next;
        	delete temp;
		}
return head;        
}

void p(node*head)
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
	node*head=new node(10);
	head->next=new node(20);
	head->next->next =new node(30);
	int data=20;
	head=d(head,data);
	p(head);
	return 0;
}





