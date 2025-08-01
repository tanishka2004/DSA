class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL){
            ListNode*  nextNode = temp->next;
        while(nextNode != NULL && nextNode->val == temp->val){
            ListNode* duplicate = nextNode;
            nextNode = nextNode->next;
            delete duplicate;
        }
        temp->next = nextNode;
        if(nextNode != NULL){
            nextNode ->prev = temp;
        }
        temp = temp->next;
        }
        return head;
    }
};
