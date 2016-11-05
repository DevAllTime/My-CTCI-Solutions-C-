
//Header file to create the linked list

class node{
public:
  int data;
  node *next;
  node(){
    next = NULL;
  }
};

node* createlist(node* head,int x);
