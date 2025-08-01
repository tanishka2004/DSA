class Solution {
public:
    ListNode* findtail(ListNode* head){
        ListNode* tail = head;
        while(tail->next != nullptr) 
        {
            tail=tail->next;
        }
        return tail;
    }
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
      vector<vector<int>> ans;
       if(head == nullptr) return ans;

       ListNode* left = head;
       ListNode* right = findtail(head);
       while(left != nullptr && right != nullptr && left != right && left->prev != right){
       if(left->val + right->val == target){
        ans.push_back({left->val,right->val});
        left = left->next;
        right = right->prev;
       }
       else if(left->val + right->val < target){
        left = left->next;
       }
       else{
        right = right->prev;
       }
      }
      return ans;
    }
};
