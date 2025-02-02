#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
Node(int x)
		{
			this->data=x;
			this->next= NULL;
			
		}
};



    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        int len1=0;
        int len2=0;
        Node*temp1=head1;
        Node*temp2=head2;
        while(temp1!=NULL)
        {
            len1++;
            temp1=temp1->next;
        }
        
        while(temp2!=NULL)
        {
            len2++;
            temp2=temp2->next;
        }
        
        if(len1!=len2)
        {
        	return false;
		}
        
        temp1=head1;
        temp2=head2;
        
            while(temp1!=NULL)
            {
                if(temp1->data!=temp2->data)
                {
                    return false;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        return true;
    }
int main()
{

	Node*head1=new Node(10);
	head1->next=new Node(20);
	head1->next->next =new Node(30);
	
	Node*head2=new Node(10);
	head2->next=new Node(20);
	head2->next->next =new Node(30);
	
    if (areIdentical(head1, head2)) {
        cout << "Lists are identical" << endl;
    } else {
        cout << "Lists are not identical" << endl;
    }

	
	return 0;
	
	
	
	
}
