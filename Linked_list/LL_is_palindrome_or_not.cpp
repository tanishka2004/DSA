class Solution {
public:
    ListNode* reverse(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* newhead = reverse(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
 }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* newhead = reverse(slow);
        ListNode* front = head;
        ListNode* second = newhead;
        while(second != NULL){
        if(front->val != second->val){
            return false;
        }
        
        front=front->next;
        second=second->next;
        }
         return true;
        
    }
};
