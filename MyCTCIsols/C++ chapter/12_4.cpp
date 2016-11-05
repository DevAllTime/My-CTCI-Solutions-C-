#include<iostream>

using namespace std;

class base{
public:
  int x;
  int y;
  base(){
    cout<<"Base constr\n";
  }
  virtual ~base(){
    cout<<"Base Destr\n";
  }
  base(const base &temp){
    cout<<"const";
    this->x = temp.x;
    this->y = temp.y;
  }
  void operator=(const base &temp){
    cout<<"asshign";
    this->x = temp.x;
    this->y = temp.y;
  }
};
class derv1:public base{
public:
  derv1(){
    cout<<"Derv1\n";
  }
  ~derv1(){
    cout<<"Derv1 Destr\n";
  }
};
class derv2:public derv1{
public:
  derv2(){
    cout<<"Derv2\n";
  }
  ~derv2(){
    cout<<"Derv2 Destr\n";
  }
};
class derv3:public derv2{
public:
  derv3(){
    cout<<"Derv3\n";
  }
  ~derv3(){
    cout<<"Derv3 Destr\n";
  }
};


int main(){
  base b1;
  derv3 d1;
  return 0;
}
