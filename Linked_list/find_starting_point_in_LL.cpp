// optimal solution
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
            fast = fast->next;
            slow = slow->next;
            }
            return slow;
        }
       }
       return NULL;
    }
};
// brute solution
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> map;
        while(temp != NULL){
            if(map.count(temp) != 0){
                return temp;
            }
            map[temp] = 1;
            temp = temp->next;
        }
        return NULL;
    }
};
