class Solution {
    public:
    Node* deleteK(Node *head,int K){
    
      if(K==1)return NULL;
      Node* temp=head, *prev=NULL;
      int count = 1;
      while(temp){
          if(count==K){
              prev->next=temp->next;
              count=0;
          }
          else prev=temp;
          count++;
          temp=temp->next;
          
      }
      return head;
     
    }
};
