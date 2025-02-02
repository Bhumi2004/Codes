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
        
        Node* temp = head;
        int count = 1; // 1-based index
        
        while (temp != NULL) {
            if (count == index) {
                return temp->data; // Return the value at the index
            }
            temp = temp->next;
            count++;
        }
        
        return -1; // If index is out of range
    }



// Driver function to test GetNth
int main() {
    Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next =new Node(30);
      
    int index = 3; // Find the 3rd node
    int result = GetNth(head, index);
    
    if (result != -1) 
        cout << "The element at index " << index << " is: " << result << endl;
    else
        cout << "Invalid index!" << endl;

    return 0;
}


	
	
	
	

