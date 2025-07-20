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
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast  = head;
       while(fast !=  NULL && fast-> next != NULL){
             slow = slow->next;
             fast = fast->next->next;
              if(fast == slow) return true;
       }
       return false;
    }
};

// brute solution
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> Nodemap;
        while(temp != NULL){
            if(Nodemap[temp]) return true;
            Nodemap[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};
