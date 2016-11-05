#include <iostream>
using namespace std;

int fact(int n){
  int res;
  if(n == 0){return 1;}
  res = n * fact(n-1);
  return res;
}
int main(){
  cout<<fact(15)<<endl;
  return 0;
}
