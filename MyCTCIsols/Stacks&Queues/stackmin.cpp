#include <iostream>
#include <stack>
using namespace std;
//Implemet stack class with POP PUSH and FINDMIN
// POP -> O(1) Complexity // PUSH -> O(1) Complexity // Min -> O(1) Complexity & O(n) Space complexity
class _stack{
  int arr[10];
  int index;
  stack<int> _s;
  unsigned int min;
public:
  _stack(){
    index = 0;
    min = -1;
  }
  int _min(){
    return _s.top();
  }
  void _pop(){
    arr[index-1]=0;
    _s.pop();
    index--;
  }
  void _push(int x){
    arr[index] = x;
    min = min<x?min:x;
    _s.push(min);
    index++;
  }
  int _top(){
    return arr[index-1];
  }
};
int main(){
  _stack s1;
  s1._push(2);
  s1._push(3);
  s1._push(7);
  s1._push(6);
  s1._push(9);
  s1._push(8);
  s1._push(10);
  s1._pop();
  s1._pop();
  s1._pop();
  cout<<s1._top()<<endl;
  cout<<s1._min()<<endl;
  return 0;
}
