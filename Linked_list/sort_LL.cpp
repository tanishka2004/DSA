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
   // optimal solution
    // Merges two sorted linked lists
    ListNode* mergeTwoSortedLL(ListNode* list1, ListNode* list2){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        // Attach the remaining part
        temp->next = (list1 != NULL) ? list1 : list2;

        return dummyNode->next;
    }

    // Finds the middle of the linked list
    ListNode* findMiddle(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Main sort function using merge sort
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        // Step 1: Split into halves
        ListNode* mid = findMiddle(head);
        ListNode* right = mid->next;
        mid->next = NULL;
        ListNode* left = head;

        // Step 2: Recursively sort both halves
        left = sortList(left);
        right = sortList(right);

        // Step 3: Merge sorted halves
        return mergeTwoSortedLL(left, right);
    }
};

// brute solution

// vector<int> arr;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // sort(arr.begin(), arr.end());
        // temp = head;
        // for(int i = 0; i<arr.size(); i++){
        //     temp->val = arr[i];
        //     temp = temp->next;
        // }
        // return head;
