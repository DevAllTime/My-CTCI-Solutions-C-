#include <iostream>
#include <vector>
using namespace std;

int main(){
  int arr[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
  //int arr[] = {0};
  vector<int> A(arr,arr+(sizeof(arr)/sizeof(arr[0])));

  vector<int>::iterator it = A.begin();
  while(it!=A.end()){
    cout<<"Before erasing: "<<endl;
    for(int i=0;i<A.size();i++){
      cout<<A[i];
    }
    cout<<"**\n";
    if((it+1)!=A.end() && *it == *(it+1)){
        vector<int>::iterator idel=it;
        while(idel!=A.end() && *idel==*it){
            idel++;
        }
        idel--;
        idel--;
        A.erase(it,idel);
        cout<<"Inloop\n";
    }
    cout<<"Here\n";
    it++;
  }
  cout<<"Mehre\n";
  //cout<<A.size();
  return 0;
}
