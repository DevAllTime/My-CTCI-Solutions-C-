#include<stdio.h>

//using namespace std;
void reverse(char* s){
  char *tmp = s;
  char tch;
  while(*tmp){
    tmp++;
  }
  while(s<tmp){
    tch     =   *s;
    *s++    =   *tmp;
    *tmp--  =   tch;
  }

}

int main(){
  char *s = "hello";
  reverse(s);
  //*(s+0)='k';
  //printf("%s",s);
  return 0;
}
