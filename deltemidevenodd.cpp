  #include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
	
		Node(int new_data)
		{
			this->data=new_data;
			this->next= NULL;
		
		}
};
  
  
  
  Node* deleteMid(Node* head) {
        // Your Code Here
        if(!head )
        {
            return NULL;
        }
        Node*slow=head;
        Node*fast=head;
       
       
      
        while(fast!=NULL && fast->next!=NULL)
        {
        
        	slow=slow->next;
        	fast=fast->next->next;
        
        
        
            
            
        }
        
        return slow;
        
        
    }
    void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    
}
int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40 -> 50 ->60
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
        head->next->next->next->next->next = new Node(60);

    cout << "Original List: ";
    printList(head);

    head = deleteMid(head);  // Delete middle node

    cout << "List after deleting middle node: ";
    printList(head);

    return 0;
}
