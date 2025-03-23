#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a node at the end of the circular linked list
node* insertEnd(node* last, int val) {
    node* newnode = new node(val);
    if (last == NULL) {
        newnode->next = newnode; // Circular reference
        return newnode;
    }
    newnode->next = last->next;
    last->next = newnode;
    return newnode;
}

// Function to print a circular linked list
void printList(node* last) {
    if (last == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* head = last->next;
    node* temp = head;

    while (true) { // Using while instead of do-while
        cout << temp->data << " ";
        temp = temp->next;
        if (temp == head) break; // Stop when we reach the head again
    }
    
    cout << endl;
}

// Function to reverse the circular linked list properly
node* reverse(node* last) {
    if (last == NULL || last->next == last) return last; // If empty or single node, return last

    node* prev = last;
    node* curr = last->next;
    node* nextNode = NULL;
    node* first = curr;  // The original first node (which will become the last node)

    while (curr != last) {  // Traverse till the last node
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Process the last node separately
    curr->next = prev;

    // Fix the new circular link
    first->next = curr;
    last = first; // Update last pointer to the new last node

    return last;
}

// Driver function
int main() {
    node* last = NULL;

    // Creating a circular linked list: 1 -> 2 -> 3 -> 4 -> (back to 1)
    last = insertEnd(last, 1);
    last = insertEnd(last, 2);
    last = insertEnd(last, 3);
    last = insertEnd(last, 4);

    cout << "Original Circular Linked List: ";
    printList(last);

    last = reverse(last);

    cout << "Reversed Circular Linked List: ";
    printList(last);

    return 0;
}


