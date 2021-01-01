if(!head) return head;
        ListNode* temp =head;
        ListNode* prev=nullptr;
        
      while(temp)
      {
          if(temp->val==val)
          {
          if(!prev)//if it is first node the we have to update the head itself
             head=temp->next;
             else prev->next=temp->next;
              
          }
           else
              prev=temp;
             temp=temp->next;  
      }
        return head;
        
    }
};
