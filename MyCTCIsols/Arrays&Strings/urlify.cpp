#include <iostream>
using namespace std;

int main(){
  string s = "Mr John Smith     ";
  static int found = 0;
  s.insert(2,"%20");
  cout<<"%";
  // for(int i=0;i<s.length();i++){
  //   if(s[i]==' '){
  //     s.insert(i,"0");
  //   }
    // if(s[i]==' '){
    //   for(int j=i;j<s.length();j++){
    //     if(s[j]==' '){
    //       s.insert(j,"%20");
    //     }else{
    //       break;
    //     }
    //   }
    // }
  //}
  cout<<s;
  return 0;
}
