class node{
   public: // access modifier
   int data; // the data valu
   node* next;  // the pointer to the next value

   public:
   node(int data1, node next1){
     data = data1; // Initialize data with the provided value
     next = next1; // Initialize next with the provided
   }
   node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list
    }
};
int main() {
    vector<int> arr={2,5,8,7};
    node* y = new node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}
