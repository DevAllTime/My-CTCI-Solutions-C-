#include <iostream>
#include <stack>
using namespace std;
#define capital_case(i) inp[i]>=65 && inp[i]<=90

int main(){
  string inp = "ABbc";
  stack<char> st;
  int r = -1;
  for(int it=0;it<inp.length();it++){
    if(capital_case(it)){
      st.push(inp[it]);
    }else{
      if(st.top() == inp[it]-32){
        st.pop();
        r = it;
      }else{
        break;
      }
    }
  }
  cout<<"Result: "<<r<<endl;
  return 0;
}


/*
int main(){
  string inp = "ABba";
  vector<int> v;
  int it=0;

  while(it<inp.length()){
    if(lower_case(it)){
      cout<<"Lowcase\n";
      if((inp[it]-32) == inp[v[v.back()]]){
        v.pop_back();
        if(v.empty()){
          cout<<"Result : "<<it<<endl;
        }
      }
    }
    if(capital_case(it) && capital_case(it+1)){ // && inp[it]<=inp[it+1]
      v.push_back(it);
      it++;
      cout<<"Cap && Cap\n";
    }else{
      if(capital_case(it) && lower_case(it+1)){
        if((inp[it]+32) == inp[it+1]){
          it = it + 2;
          cout<<"Cap and Low\n";
        }
      }
    }
  }
  return 0;
}
*/
