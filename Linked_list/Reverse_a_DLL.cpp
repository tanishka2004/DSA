class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
       if(head == NULL || head->next == NULL){
        return head;
       }
       ListNode* prev = NULL;
       ListNode* current = head;
       while(current != NULL){
       prev = current->prev;
       current->prev =  current->next;
       current->next = prev;
       current = current->prev;
       }
       return prev->prev;
    }
};
