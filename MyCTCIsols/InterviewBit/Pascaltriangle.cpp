#include <iostream>
#include <vector>

using namespace std;

int main(){
      int rowIndex = 3;
       vector<int> vi(rowIndex + 1);
       vi[0] = 1;
       for (int i = 0; i <= rowIndex ; ++i)
       {
         cout<<"For i: "<<i<<endl;
         for (int j = i; j > 0; --j)
         {
           cout<<"for J: "<<j<<endl;
//           cout<<vi[j-1]<<"**b"<<vi[j]<<endl;
           vi[j] = vi[j] + vi[j-1];
  //         cout<<vi[j-1]<<"**a"<<vi[j]<<endl;
          cout<<vi[j]<<endl;
         }
       }
       cout<<"****\n";
       for(int i=0;i<vi.size();i++){
         cout<<vi[i]<<endl;
       }


  return 0;
}
