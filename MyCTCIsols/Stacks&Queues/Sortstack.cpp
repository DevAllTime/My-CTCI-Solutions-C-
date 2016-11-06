#include <iostream>
#include <stack>
using namespace std;
// Insert elements into S2 if the input is > top of stack.
int main(){
  stack<int> s1;
  stack<int> s2;
  int input;
  do{
  cin>>input;
  if(s1.empty()){
    s1.push(input);
  }else{
    while(!s1.empty() && input > s1.top()){
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(input);
    while(!s2.empty()){
      s1.push(s2.top());
      s2.pop();
    }
  }
  }while(input!=0);

  while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
  }
  return 0;
}
