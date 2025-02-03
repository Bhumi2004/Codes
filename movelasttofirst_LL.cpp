   Node *moveToFront(Node *head) {
        // code here
        if(head==NULL && head->next==NULL)
        {
            return 0;
        }
        Node*last=head;
        Node*second=NULL;
        
        while(last->next!=NULL)
        {
            second=last;
            last=last->next;
        }
        
       second->next=NULL;
       last->next=head;
       head=last;
       
       
        return head;
    }
    
