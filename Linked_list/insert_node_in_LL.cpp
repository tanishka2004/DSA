/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
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
    ListNode* insertAtHead(ListNode* &head, int X) {
      ListNode* temp = new ListNode(X, head);
      return temp;
    }
};

/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head == NULL){
            return new Node(x);
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node* newnode = new Node(x);
        temp->next = newnode;
        return head;
    }
};
