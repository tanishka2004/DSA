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
int lengthll(ListNode* slow, ListNode* fast){
    int cnt = 1;
    slow =  slow->next;
    while(slow!=fast){
        cnt++;
        slow=slow->next;
    }
    return cnt;
}
class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
       slow = slow->next;
       fast = fast->next->next;
       if(slow == fast){
        return lengthll(slow, fast);
       }
    }
    return 0;
    }
};
