struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(k==1 or head==NULL) return head;
        
        node *prev = NULL;
        node *curr = head;
        node *next = NULL;
        
        int count=0;
        
        while(curr!=NULL && count<k){
            
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next!=NULL){
            
            head->next = reverse(next,k);
        }
        
        return prev;
    }
