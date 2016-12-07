#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> S;
  S.push_back(1);
  S.push_back(2);
  S.push_back(2);
  vector<vector<int> > totalset;
       sort(S.begin(),S.end());
       for(int i=0; i<S.size();){
            cout<<"i: "<<i<<endl;
           int count = 0; // num of elements are the same
           while(count + i<S.size() && S[count+i]==S[i])  count++;
           cout<<"After count: "<<count<<endl;
           int previousN = totalset.size();
           cout<<"totalset size: "<<previousN<<endl;
           for(int k=0; k<previousN; k++){
             cout<<"For k: "<<k<<endl;
               vector<int> instance = totalset[k];
               for(int j=0; j<count; j++){
                  cout<<"J: "<<j<<endl;
                   instance.push_back(S[i]);
                   cout<<"Instance contain: "<<S[i]<<endl;
                   totalset.push_back(instance);
               }
           }
           i += count;
           cout<<"After i: "<<i<<endl;
           cout<<"*******************************************\n";
       }
       //a totalset;
  return 0;
}
