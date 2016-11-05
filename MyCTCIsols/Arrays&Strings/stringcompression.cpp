#include <iostream>
#include <string>
using namespace std;
// O(n) Complexity
int main(){
  string s = "aabbccddeeffgg";
  string s1;
  unsigned int count=1;
  for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
      count++;
    }else{
      s1 = s1 + s[i] + to_string(count);
      count = 1;
    }
  }
  if(s.length()==s1.length() || s.length()<s1.length()){
    cout<<s<<endl;
  }else{
    cout<<s1<<endl;
  }
  return 0;
}
