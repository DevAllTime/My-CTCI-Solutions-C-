#include <iostream>
#include <set>
using namespace std;
//O(nlogn) Complexity
int main(){
  string s = "DILEEP";
  sort(s.begin(),s.end());
  for(int i=0;i<s.length();i++){
    if(s[i] == s[i+1]){
      cout<<"Not Unique\n";
      return 0;
    }
  }
  cout<<"Unique"<<endl;
  return 0;
}
//O(n) Time complexity O(n)Space Complexity
/*int main(){
  string s = "HELLO";
  set<char> myset;
  set<char>::iterator it;
  pair<set<char>::iterator,bool> ret;
  for(int i=0;i<s.length();i++){
    ret=myset.insert(s[i]);
    if((ret.second)==false){
      cout<<"Not Unique\n";
      return 0;
    }
  }
  cout<<"Unique"<<endl;
  return 0;
}*/
