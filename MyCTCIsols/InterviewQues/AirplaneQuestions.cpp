#include <iostream>
using namespace std;

int main(){
  // int arr[]  = {900,  940, 950,  1100, 1500, 1800, 1900, 2000,2100};
  // int dep[]  = {910, 1200, 1120, 1130, 1900, 2000, 2100, 2200, 2300};
  int arr[]  = {900,  940, 950,  1100, 1500, 1800, 1900, 2000, 2100};
  int dep[]  = {910, 1200, 1120, 1130, 1900, 2000, 2100, 2200, 2300};
  //Sorting is O(nlogn)
  sort(arr,arr + 6);
  sort(dep,dep + 6);
 //  Time     Event Type     Total Platforms Needed at this Time
 // 9:00       Arrival                  1
 // 9:10       Departure                0
 // 9:40       Arrival                  1
 // 9:50       Arrival                  2
 // 11:00      Arrival                  3
 // 11:20      Departure                2
 // 11:30      Departure                1
 // 12:00      Departure                0
 // 15:00      Arrival                  1
 // 18:00      Arrival                  2
 // 19:00      Departure                1
 // 20:00      Departure                0
 //Initialising pointers:
 int *arrival = arr;
 int *departure = dep;
 int no_of_planes_needed=0;
 int max_planes=0;
 while(arrival<arr+(sizeof(arr)/sizeof(arr[0])) && departure<dep+(sizeof(dep)/sizeof(dep[0]))){
   max_planes = no_of_planes_needed > max_planes ? no_of_planes_needed : max_planes;
   if(*arrival<*departure){
     no_of_planes_needed++;
     arrival++;
   }else{
     no_of_planes_needed--;
     departure++;
   }
 }
 cout<<"Result : "<<max_planes<<endl;
 return 0;
}
