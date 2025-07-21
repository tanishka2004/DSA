/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if(head == NULL || head->next== NULL){
        return head;
      }   
      ListNode* newhead = reverseList(head->next);
      head->next->next = head;
      head->next = NULL;
      return  newhead;
    }
};
