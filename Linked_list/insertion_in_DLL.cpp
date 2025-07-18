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
    ListNode* insertBeforeHead(ListNode* head, int X) {
           ListNode* newNode = new ListNode(X, head, NULL);
           head->prev= newNode;
           newNode->next= head;
           return newNode;
    }
};

class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node* newNode = new Node(data);
        Node* temp = head;
        for(int i = 0; i < pos; i++){
            if(temp == NULL) return head;
            temp =  temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        return head;
    }
};
