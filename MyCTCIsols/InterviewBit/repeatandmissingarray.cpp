#include <iostream>
#include <vector>
using namespace std;

int main(){
  int arr[5]={3,2,1,4,1};
  vector<int> V(arr,arr+5);
  long long sum = 0;
  long long squareSum = 0;
  long long temp;
  for (int i = 0; i < V.size(); i++) {
    cout<<"********Iteration: "<<i<<endl;
    temp = V[i];
    cout<<"temp: "<<V[i]<<endl;
    sum += temp;
    cout<<"Sum+= "<<sum<<endl;
    sum -= (i + 1);
    cout<<"Sum-= "<<sum<<endl;
    squareSum += (temp * temp);
    cout<<"squaresum+= "<<squareSum<<endl;
    squareSum -= ((long long)(i + 1) * (long long)(i + 1));
    cout<<"squaresum-= "<<squareSum<<endl;
    cout<<"***** iteration ended"<<endl;
  }
         // sum = A - B
         // squareSum = A^2 - B^2 = (A - B)(A + B)
         // squareSum / sum = A + B
         squareSum /= sum;

         // Now we have A + B and A - B. Lets figure out A and B now.
         int A = (int) ((sum + squareSum) / 2);
         int B = squareSum - A;
         cout<<A<<B;
return 0;
}
