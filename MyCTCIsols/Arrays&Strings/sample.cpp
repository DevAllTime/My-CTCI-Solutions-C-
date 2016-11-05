#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string s = "ABC";
  do{
    cout<<s<<endl;
  }while(prev_permutation(s.begin(),s.end()));
  cout<<"***********\n";
  // do{
  //   cout<<s<<endl;
  // }while(next_permutation(s.begin(),s.end()));
  return 0;
}
