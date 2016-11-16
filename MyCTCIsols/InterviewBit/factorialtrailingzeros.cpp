#include <iostream>
using namespace std;

int main(){
  int A = 25;
  int sum=0;
  while((A/5)>0){
    sum = sum + (A/5);
    A = A / 5;
  }
  cout<<sum;
  return 0;
}
