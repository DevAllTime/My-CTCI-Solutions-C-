#include <iostream>
#include <map>
using namespace std;
//Total Complexity is O(nlogn)
/*int main(int argc,char* argv[]){
  string s1 = "ABCD";
  string s2 = "CDBA";
  sort(s1.begin(),s1.end()); // O(nlogn)
  sort(s2.begin(),s2.end()); // O(nlogn)
  if(s1 == s2){
    cout<<"Perumation\n";
    return 0;
  }
  cout<<"Not Permutation\n";
  return 0;
}*/
// O(n) Time Complexity and O(n) Space Complexity
int main(){
  string s1 = "Hello";
  string s2 = "lloeH";
  map<char,int> mymap;
  map<char,int>::iterator it;
  //O(n) Time Complexity
  for(int i=0;i<s1.length();i++){
    int value = 1;
    if(mymap[s1[i]]==0){
      mymap[s1[i]]=value;
    }else{
      mymap[s1[i]]++;
    }
    if(mymap[s2[i]]==0){
      mymap[s2[i]]=value;
    }else{
      mymap[s2[i]]++;
    }
  }
//O(n) Space Complexity
  for(map<char,int>::iterator it=mymap.begin();it!=mymap.end();it++){
    if(it->second<2){
      cout<<"Not Permutation\n";
      return 0;
    }
  }
  cout<<"Permutation\n";
  return 0;
}
