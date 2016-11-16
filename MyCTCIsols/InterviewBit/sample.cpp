#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

  vector<int> A;
  A.push_back(1);
  A.push_back(2);
  A.push_back(3);
  A.push_back(4);
  vector<int>::iterator p = A.begin();
  while(p!=A.end()){
    if(*p==4){
      vector<int>::iterator p1 = p;
      A.erase(p1);
      p--;
    }
    p++;
  }
  for(int i=0;i<A.size();i++){
    cout<<A[i];
  }
  return 0;
}
