#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main(){
  ifstream in("WrdFrqPara.txt");
  map<string,int> wordcount;
  map<string,int>::iterator it;
  string c;
  while(in >> c){
    it = wordcount.find(c);
    if(it != wordcount.end()){
      wordcount[c]++;
    }else{
      wordcount[c]=1;
    }
  }
  for(map<string,int>::iterator my = wordcount.begin();my!=wordcount.end();my++){
      cout<< my->first<<" : ";
      for(int i=0;i<my->second;i++){
        cout<<"*";
      }
      cout<<" : "<<my->second<<endl;
  }
  cout<<endl;
  return 0;
}
