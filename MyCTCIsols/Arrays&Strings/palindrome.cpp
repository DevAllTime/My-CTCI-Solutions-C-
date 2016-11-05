#include <iostream>
#include <algorithm>
using namespace std;
// Complexity is O(n) using prev_permutation
int main(){
  string s = "tact coa";
  do{
    int i=0;
    int j = s.length()-1;
    int total=0;
    for(;i!=j;i++,j--){
      if(s[i]==' '||s[j]==' '){
        total++;
        break;
      }
      if(s[i]!=s[j]){
        break;
      }
      total++;
    }
    if(total==4){
      cout<<"Palindrome: "<<s<<endl;
    }
  }while(prev_permutation(s.begin(),s.end()));

  return 0;
}
