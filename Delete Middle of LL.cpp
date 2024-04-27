
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(head == NULL) return NULL;
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        Node* slow_ptr = head; 
        Node* fast_ptr = head; 
        Node* prev;  
        while (fast_ptr != NULL && fast_ptr->next != NULL) { 
        fast_ptr = fast_ptr->next->next; 
        prev = slow_ptr; 
        slow_ptr = slow_ptr->next; 
        }
        prev->next = slow_ptr->next; 
        delete slow_ptr; 
  
        return head; 
    
        
    }
};
