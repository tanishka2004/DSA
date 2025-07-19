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
    ListNode* middleOfLinkedList(ListNode* head) {
      ListNode* slow = head;
      ListNode* fast = head;
      while(fast != NULL && fast-> next != NULL){
        slow= slow->next;
        fast = fast->next->next;
      }
      return slow;
    }
};

// brute solution
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         if (head == NULL || head->next == NULL) {
        return head;
    }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int mid = cnt/2 + 1;
        temp = head;
        while(temp != NULL){
            mid = mid - 1;
            if(mid == 0){
                break;
            }
            temp = temp -> next;
        }
        return temp;
    }
};
