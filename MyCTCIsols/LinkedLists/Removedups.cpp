#include <iostream>
#include "Listcreate.h"
using namespace std;

int main(){
  node *head = NULL;
  head=createlist(head,2);
  createlist(head,3);
  createlist(head,2);
  createlist(head,5);
  createlist(head,7);
  createlist(head,8);
  for(;head!=NULL;head=head->next){
    cout<<head->data<<"-->";
  }
  



  return 0;
}
