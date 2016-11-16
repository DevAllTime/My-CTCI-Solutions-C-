#include <iostream>
using namespace std;

int main(){
  int A[4]={3,1,-1,4};
  int n = 4;
  for (int i = 0; i < n; i++) {
    cout<<"First For i: "<<i<<endl;
    cout<<"A[i] "<<A[i]<<endl;
    if (A[i] > 0 && A[i] <= n) {
        int pos = A[i] - 1;
        cout<<"Position pos: "<<pos<<endl;
        cout<<"A[pos]!=A[i]"<<A[pos]<<" "<<A[i]<<endl;
        if (A[pos] != A[i]) {
          swap(A[pos], A[i]);
          i--;
        }
    }
  }
  for (int i = 0; i < n; i++) {
    if (A[i] != i + 1){
      cout<<i+1<<endl;
    };
  }
  return 0;
}
