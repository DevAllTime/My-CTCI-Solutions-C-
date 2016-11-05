#include <iostream>
using namespace std;

int main(){

    string s = "abcd";//a2b
    int count = 1;
    int i;
    while(i<s.length()){   //0(n)
        if(s[i] != s[i+1]){
          cout<<s[i]<<count;
          count = 1;
        }else{
          count++;
        }
        i++;
    }
    cout<<endl;
    return 0;
}
