class Solution {
public:
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val == target) {
                ListNode* Nextnode = temp->next;
                ListNode* Prevnode = temp->prev;

                if (Prevnode != NULL) {
                    Prevnode->next = Nextnode;
                } else {
                    // If there's no previous node, we're deleting the head
                    head = Nextnode;
                }

                if (Nextnode != NULL) {
                    Nextnode->prev = Prevnode;
                }

                delete temp;
                temp = Nextnode; 
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
