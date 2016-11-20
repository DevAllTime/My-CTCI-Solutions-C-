#include<iostream>
#include <vector>
using namespace std;

int main(){
  int arr[7]={2,2,2 ,1, 5,2,1};
  vector<int> A(arr,arr+7);
  int majorityIndex = 0;
  for (int count = 1, i = 1; i < A.size(); i++) {
    A[majorityIndex] == A[i] ? count++ : count--;
    if (count == 0) {
        majorityIndex = i;
        count = 1;
    }
}

  cout<<A[majorityIndex]<<endl;


  return 0;
}
