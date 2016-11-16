#include <iostream>
using namespace std;

int main(){
  int A = 4294967295;
  int temp = A;
  unsigned int count=0;
// if(A==0){return 0;}
// if(A==1){return 1;}

    cout<<temp<<"*";
  while(temp){
    cout<<temp<<"*";
    if(temp%2==1){
        count++;
    }
    temp = temp / 2;
  }
  cout<<count;
  return 0;
}
