#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

// Function to reverse the linked list
Node* reverse(Node* head) {
  Node*curr=head, *next=NULL, *prev=NULL;
  while(curr!=NULL)
  {
  	next=curr->next;
  	curr->next=prev;
  	prev=curr;
  	curr=next;
  }
  return prev;
}

// Function to add 1 to the reversed list
Node* addOneUtil(Node* head) {
	Node*temp =head;
	int carry=1;
	while(temp!=NULL)
	{
		int sum= temp->data+carry;
		temp->data= sum%10; //last digit
		carry =sum/10;
		
  if(temp->next==NULL && carry>0)//1000->0001
  {
  	temp->next=new Node(carry);
  	carry=0;
		  }	
		  temp=temp->next;	
		
	}
	return head;
  
}

// Function to add 1 to a linked list
Node* addOne(Node* head) {
    head=reverse(head);
    head=addOneUtil(head);
    return reverse(head);
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

int main() {
  
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    cout << "Before: ";
    printList(head);

    head = addOne(head);

    cout << "After: ";
    printList(head);

    return 0;
}

