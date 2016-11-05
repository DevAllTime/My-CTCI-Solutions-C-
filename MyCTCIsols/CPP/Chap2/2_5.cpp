// This is about SUMATION OF TWO LINKED LISTS AND PROJECTION IT IN OTHER LINKED LISTS

 to know the numbers Left signifitant bit u have to modulo


#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;
};

int main(){

  Node *third = new Node();
  third->data = 6;third->next = NULL;
  Node *second = new Node();
  second->data = 1; second->next = third;
  Node *first = new Node();
  first->data = 7; first->next = second;

  Node *fll = first;

  Node *six = new Node();
  six->data = 2;six->next = NULL;
  Node *fifth = new Node();
  fifth->data = 9; fifth->next = six;
  Node *fourth = new Node();
  fourth->data = 5; fourth->next = fifth;

  Node *sll = fourth;

  /*while(fll){
    cout<<fll->data<<"\t";
    fll = fll->next;
  }
  cout<<endl;
  while(sll){
    cout<<sll->data<<"\t";
    sll = sll->next;
  }*/                         // TO Display the elemets in the linked lists.
  // 7 1 6
  // 5 9 2
  // 1 1
  // 6 1 7
  // 2 9 5
  //   1 2
  int number = 0;
  int carry1=0;
  int carry2=0;
  Node *h_ead = NULL;Node *prev=NULL;
  while(fll && sll){
      number = carry2 + fll->data + sll->data;
      carry1 = (number%10);
      carry2 = number/10;
      if(h_ead == NULL){
        Node *current = new Node();
        current->data = carry1;
        current->next = NULL;
        h_ead = current;
        prev = current;
      }else{
        Node *temp = new Node();
        temp->data = carry1;
        temp->next = NULL;
        prev->next = temp;
        prev = temp;
      }
      fll = fll->next;
      sll = sll->next;
  }

  // 2 1 9

cout<<"Final sumation"<<endl;
  while(h_ead){
    cout<<h_ead->data<<"\t";
    h_ead = h_ead->next;
  }

  return 0;
}
