#include <iostream>
using namespace std;

void rotatematrix(int a[][3]){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" | "<<a[i][j]<<" | ";
    }
    cout<<endl;
  }
  swap(a[0][0],a[0][2]);
  swap(a[0][0],a[2][2]);
  swap(a[0][0],a[2][0]);

  swap(a[0][1],a[1][0]);
  swap(a[1][0],a[2][1]);
  swap(a[2][1],a[1][2]);
  cout<<"*******\n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" | "<<a[i][j]<<" | ";
    }
    cout<<endl;
  }
}

int main(){
  int arr[3][3];
  cout<<"length: "<<sizeof(arr)<<endl;
  static unsigned int x = 1;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr[i][j]= x++;
    }
  }
  rotatematrix(arr);
  return 0;
}
