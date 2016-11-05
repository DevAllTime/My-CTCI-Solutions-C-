#include <iostream>
#include "Listcreate.h"
using namespace std;

node* createlist(node* head,int x){
  node *root = head;
  node *temp=new node();
  if(root == NULL){
    temp->data = x;
    temp->next = NULL;
    root = temp;
  }else{
    node* last=head;
    for(;last->next!=NULL;last = last->next){}
    temp->data = x;
    last->next = temp;
  }
  return root;
}

// int main(){
//   // node *head = NULL;
//   // head=createlist(head,2);
//   // createlist(head,3);
//   // createlist(head,4);
//   // createlist(head,5);
//   // createlist(head,6);
//   return 0;
// }
