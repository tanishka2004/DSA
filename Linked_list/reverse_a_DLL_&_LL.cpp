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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr != NULL){
        ListNode* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
    }
};
