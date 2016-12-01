#include <iostream>
using namespace std;

class base{
public:
  virtual int foo(int i){
    cout<<"Base foo int\n";
  }
  int foo(string s){
    cout<<"string base foo\n";
  }
};

class derived : public base{
public:
  int foo(int i){
    cout<<"Derived foo int\n";
  }
  int foo(string s){
    cout<<"Deriveed foo string\n";
  }
};
int main(){
  base b;
  b.foo(2);
  b.foo("str");
  derived d;
  base& b1 = d;
  b1.foo(1);
  b1.foo("str");
  return 0;
}
