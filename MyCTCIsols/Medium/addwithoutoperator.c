#include <stdio.h>
int add(int a,int b)
{
    int sum,carry;
    if (b == 0)
            return a;
    sum = a ^ b; // add without carrying 
    carry = (a & b) << 1; // carry, but don’t
    return add(sum,carry); // recurse 1,2
}
int main(){
  printf("%d\n",add(2,3));
  return 0;
}
