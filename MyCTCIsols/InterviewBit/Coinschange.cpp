#include<iostream>
#include <vector>
using namespace std;

int main(){

      int N = 4;
      vector<int> A;
      A.push_back(1);
      A.push_back(2);
      A.push_back(3);

      int num_ways[N+1];
			int i, j, m = A.size();
			memset(num_ways, 0, sizeof(num_ways));

			num_ways[0] = 1;

			for(i = 0; i < m; i++) {
        cout<<A[i]<<"****"<<endl;
				for(j = A[i]; j <= N; j++) {
					num_ways[j] = num_ways[j]+num_ways[j - A[i]];
          cout<<"j: "<<j<<" num_ways[j]: "<<num_ways[j]<<endl;
				}
			}

      cout<<num_ways[N];
  return 0;
}
