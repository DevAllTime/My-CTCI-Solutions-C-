#include <iostream>
#include <vector>
using namespace std;

int main(){
  int arr[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
  //int arr[] = {0};
  vector<int> A(arr,arr+(sizeof(arr)/sizeof(arr[0])));

  vector<int>::iterator it = A.begin();
  while(it!=A.end()){
    if((it+1)!=A.end() && *it == *(it+1)){
        vector<int>::iterator idel=it;
        while(idel!=A.end() && *idel==*it){
            idel++;
        }
        idel--;
        idel--;
        A.erase(it,idel);
    }

    it++;
  }


  return 0;
}
