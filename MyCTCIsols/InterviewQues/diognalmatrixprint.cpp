#include <iostream>
using namespace std;
//Print the matrix in below way
int main(){
  int arr[4][4];
  int count = 1;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      arr[i][j]=count;
      count++;
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout<<arr[i][j]<<"|";
    }
    cout<<endl;
  }
  //Input
  //  00  01  02  03
  //  10  11  12  13
  //  20  21  22  23
  //  30  31  32  33
  //Output:
  //        33
  //      32  23
  //     31 22  13
  //   30 21  12  03
  //    20  11  02
  //      10  01
  //        00

  //        16
  //       15 12
  //     14  11  8
  //    13  10  7  4
  //     9   6  3
  //       5  2
  //        1

  //  00  01  02  03
  //  10  11  12  13
  //  20  21  22  23
  //  30  31  32  33

  //        33
  //      32  23
  //     31 22  13
  //   30 21  12  03
  //    20  11  02
  //      10  01
  //        00

  int arr1[4];
  for(int i=0;i<4;i++){
    arr1[i]=3;
  }


  cout<<endl<<endl;
  int a=3,b=4,c=5,d=-3;
  while(d!=4){

    //cout<<"A: "<<a<<"D: "<<d<<endl;

    if(a>=0){
      int z = a;
      while(z>=0){
        cout<<" ";
        z--;
      }
    }else{
      int z = d+2;
      while(z--){
        cout<<" ";
        //z++;
      }
    }

    // if(a>=0 && a<4){
    //   cout<<arr[3][arr1[0]]<<" ";
    //   arr1[0]--;
    // }
    // if(b>=0 && b<4){
    //   cout<<arr[2][arr1[1]]<<" ";
    //   arr1[1]--;
    // }
    // if(c>=0 && c<4){
    //   cout<<arr[1][arr1[2]]<<" ";
    //   arr1[2]--;
    // }
    // if(d>=0 && d<4){
    //   cout<<arr[0][arr1[3]]<<" ";
    //   arr1[3]--;
    // }
    // a++;b++;c++;d++;
    if(a<=3 && a>=0){
      cout<<arr[3][arr1[0]]<<" ";
      arr1[0]--;
    }
    if(b<=3 && b>=0){
      cout<<arr[2][arr1[1]]<<" ";
      arr1[1]--;
    }
    if(c<=3 && c>=0){
      cout<<arr[1][arr1[2]]<<" ";
      arr1[2]--;
    }
    if(d>=0 && d<4){
      cout<<arr[0][arr1[3]]<<" ";
      arr1[3]--;
    }
    a--;b--;c--;d++;
    cout<<endl;

  }
}
