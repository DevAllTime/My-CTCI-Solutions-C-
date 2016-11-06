#include <iostream>
#include "Listcreate.h"
#include <stack>
using namespace std;

int main(){
  node *head = NULL;
  stack<int> st;
  head=createlist(head,2);
  createlist(head,3);
  createlist(head,2);
  createlist(head,5);
  createlist(head,2);
  createlist(head,5);
  createlist(head,2);
  node *current = head;
  node *runner = head;
  while(runner!=NULL && runner->next!=NULL){
    st.push(current->data);
    current = current->next;
    runner = (runner->next)->next;
  }
  if(runner!=NULL){
    st.pop();
  }
  while(current!=NULL){
    if(st.top() == current->data){
      st.pop();
    }
    current = current->next;
  }

  if(st.empty()){
    cout<<"Palindrome\n";
  }else{
    cout<<"Not a palindrome\n";
  }

  return 0;
}
