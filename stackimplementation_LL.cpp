#include<bits/stdc++.h>
using namespace std;

class stackn{
	public:
		int data;
		stackn*next;
};

stackn*newnode(int data)
{
	stackn* stacknode= new stackn();
	stacknode->data=data;
	stacknode->next=NULL;
	return stacknode;
}
int isEmpty(stackn*root)
{
	return !root;
}

void push(stackn**root, int data)
{
	stackn* stacknode=newnode(data);
	stacknode->next=*root;
	*root=stacknode;
	cout<<data<<"pushed to stack\n";
	
}


int pop(stackn**root)
{
	if(isEmpty(*root))
	return INT_MIN;
	stackn*temp=*root;
	*root=(*root)->next;
	int popped=  temp->data;
	free(temp);
	return popped;
}
int peek(stackn*root)
{
	if(isEmpty(root)) return INT_MIN;
	return root->data;
}
int main()
{
    stackn* root = NULL;  // Initialize an empty stack

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl;
    
    cout << "Elements present in stack: ";
    while (!isEmpty(root))
    {
        cout << peek(root) << " ";  // Print top element
        pop(&root);  // Remove top element
    }

    return 0;
}















