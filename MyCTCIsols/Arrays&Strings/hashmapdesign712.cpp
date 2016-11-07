#include <iostream>
#include <time.h>
using namespace std;
class node{
public:
  node(){
    data=-1;
    next = NULL;
  }
  unsigned int data;
  node *next;
};

int main(){
  node* arr[5];
  //Initialise
  for(int i=0;i<5;i++){
    arr[i] = new node();
  }
  //HASH MAP FUNCTION
  srand(time(NULL));
  int position = rand()%5;
  int value;
  do{
    cin>>value;
    position = rand()%4;
    cout<<"Postion: "<<position<<endl;
    if(arr[position]->data == -1){
      cout<<"In IF\n";
      node *current = arr[position];
      current->data = value;
    }else{
      cout<<"In ELSE\n";
      node *temp = arr[position];
      while(temp->next!=NULL){
        temp = temp->next;
      }
      node *current = new node;
      current->data = value;
      current->next = NULL;
      temp->next = current;
    }
  }while(value!=0);

  for(int i=0;i<5;i++){
    node *disp = arr[i];
    if(disp->data!=-1){
      while(disp!=NULL){
        cout<<disp->data<<"-->";
        disp = disp->next;
      }
      cout<<endl;
    }else{
      cout<<"0-->"<<endl;
    }
  }
  return 0;
}
