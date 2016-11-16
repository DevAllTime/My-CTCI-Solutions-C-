#include <iostream>
#include <vector>
using namespace std;

int main(){

int A = 10;
  vector<int> final;
      vector<int> res;
      res.push_back(1);
      res.push_back(2);
      res.push_back(3);
      bool isprime=true;
      for(int i=4;i<A;i++){

          for(int k=2;k<9;k++){
            if(k == i){
              continue;
            }
            if(i%k == 0){
              isprime = false;
            }
          }
          if(isprime){
            res.push_back(i);
          }
          isprime  = true;
      }
      cout<<"Primes are: \n";
      for(int i=0;i<res.size();i++){
        cout<<res[i];
      }
      cout<<"\n";
      int retrn;
      for(int it=0;it<res.size();it++){
          retrn = A-res[it];
          if(binary_search(res.begin(),res.end(),retrn)){
              if(final.empty()){
                  final.push_back(res[it]);
                  final.push_back(retrn);
              }else{
                  if(final[0]<retrn || final[0]==retrn || final[1]<res[it]){
                      final[0] = res[it];
                      final[1] = retrn;
                  }

              }
              cout<<final[0]<<final[1]<<endl;
          }

      }

      cout<<final[0]<<final[1];
  return 0;
}
