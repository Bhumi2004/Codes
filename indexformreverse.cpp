#include <iostream>
using namespace std;

// Definition of Node structure
class Node {
  public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};


    int GetNth(Node *head, int index) {
        if (!head) return -1; // Edge case: Empty list
        
        Node* first=head;
        Node*second=head;
        
        
        for(int i=0;i<index;i++)
        {
        	if(!first) return -1;
        	first=first->next;
        	
		}
        
        while (first != NULL) {
            first=first->next;
            second = second->next;
            
        }
        
        return second->data; 
    }



// Driver function to test GetNth
int main() {
    Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next =new Node(30);
	head->next->next->next =new Node(40);
	head->next->next->next->next =new Node(50);
      
    int index = 3; // Find the 3rd node
    int result = GetNth(head, index);
    
    if (result != -1) 
        cout << "The element at index " << index << " is: " << result << endl;
    else
        cout << "Invalid index!" << endl;

    return 0;
}


	
	
	
	

