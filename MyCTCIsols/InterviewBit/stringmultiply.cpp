#include <iostream>
using namespace std;

int main(){
  string A = "9999999999";
  string B = "2";
  long long int x=0;
  long long int y=0;
  int mul =1;
  for(int i=A.length()-1;i>=0;i--){
    x = (int)(A[i]-'0') * mul + x;
    mul *= 10;
  }
  cout<<x<<endl;
  mul =1;
  for(int i=B.length()-1;i>=0;i--){
    y = (int)(B[i]-'0') * mul + y;
    mul *= 10;
  }

  long long int z = x*y;

  cout<<z;


  return 0;
}
