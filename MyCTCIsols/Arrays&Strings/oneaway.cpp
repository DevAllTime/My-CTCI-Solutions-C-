#include <iostream>
using namespace std;
// O(n) Complexity
int main(){
  string s1="apale";
  string s2="pale";
  unsigned int change=0;
// < ----------
  if(s1.length()<s2.length()){
    for(int i=0,j=0;i<s1.length() || j<s2.length();){
      if(s1[i]==s2[j]){
        i++;
        j++;
      }else{
        j++;
        change++;
      }
    }
    change==0?cout<<"Nothing to change < \n":(change==1?cout<<"One edit away < \n":cout<<"More than one edit away < \n");
  }
// = ----------
  if(s1.length() == s2.length()){
    for(int i=0,j=0;i<s1.length()|| j<s2.length();){
      if(s1[i]!=s2[j]){
        i++;
        j++;
        change++;
      }else{
        i++;
        j++;
      }
    }
    change==0?cout<<"Nothing to change = \n":(change==1?cout<<"One edit away = \n":cout<<"More than one edit away = \n");
  }
// > ------
  if(s1.length()>s2.length()){
    for(int i=0,j=0;i<s1.length() || j<s2.length();){
      if(s1[i]==s2[j]){
        i++;
        j++;
      }else{
        i++;
        change++;
      }
    }
    change==0?cout<<"Nothing to change > \n":(change==1?cout<<"One edit away > \n":cout<<"More than one edit away > \n");
  }
  return 0;
}
