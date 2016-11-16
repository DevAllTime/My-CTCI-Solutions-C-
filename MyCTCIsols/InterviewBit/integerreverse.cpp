#include <iostream>
using namespace std;

int main(){

  int a = -123456;

  int temp = a;
  int sum = 0;
  while(temp){
      sum = (10 * sum) + (temp%10);
      temp = temp / 10;
  }


  cout<<sum;

  return 0;

}
