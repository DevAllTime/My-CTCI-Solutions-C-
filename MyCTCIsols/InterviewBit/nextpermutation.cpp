#include <iostream>
using namespace std;

int main(){
  string A = "DTNGJPURFHYEW";
  string temp = A;
  sort(temp.begin(),temp.end());
  int count = 1;
  do{
    cout<<temp<<"*******"<<count<<endl;
      if(temp == A){
          cout<<count % 1000003;
      }
      count ++;
  }while(next_permutation(temp.begin(),temp.end()));
  return 0;

}
