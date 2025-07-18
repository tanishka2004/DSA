/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * deleteHead(ListNode* head) {
       if(head == NULL) return head;
       ListNode* temp = head;
       head = head->next;
       if(head != NULL){
        head->prev = NULL;
       }
       delete temp;
       return head;
    }
};


class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
      if(head == NULL) return NULL;
      if(x == 1){
          Node* temp = head;
          head = head->next;
          if(head != NULL){
              head->prev = NULL;
          }
          delete temp;
          return head;
      } 
      Node* curr = head;
      for(int i = 1; i < x && curr != NULL; i++){
          curr = curr->next;
      }
      if(curr==NULL) return head;
      if(curr->prev != NULL){
          curr->prev->next = curr->next;
      }
      if(curr->next != NULL){
          curr->next->prev = curr->prev;
      }
      delete curr;
      return head;
    }
};
