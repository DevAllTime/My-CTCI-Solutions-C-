#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> players(5,0);
  int sharath,kaliyug,vijay,chinni,ajay;
  int maxscore=0;
  while(1){
    //sharath | kaliyug | vijay | chinni | ajay
    cout<<"-----Current scores----"<<endl;
    cout<<players[0]<<"|"<<players[1]<<"|"<<players[2]<<"|"<<players[3]<<"|"<<players[4]<<endl;
    for(int i=0;i<players.size();i++){maxscore = max(maxscore,players[i]);}
    if(maxscore == players[0]){cout<<"Max score is sharath\n";}
    if(maxscore == players[1]){cout<<"Max score is kaliyig\n";}
    if(maxscore == players[2]){cout<<"Max score is vijay\n";}
    if(maxscore == players[3]){cout<<"Max score is chinni\n";}
    if(maxscore == players[4]){cout<<"Max score is ajay\n";}
    cout<<"Please enter Sharath score: "<<endl;cin>>sharath;
    players[0] = players[0] + sharath;
    cout<<"Please enter kaliyug scoreL "<<endl;cin>>kaliyug;
    players[1] = players[1] + kaliyug;
    cout<<"Please enter vijay score: "<<endl;cin>>vijay;
    players[2] = players[2] + vijay;
    cout<<"Please enter chinni score: "<<endl;cin>>chinni;
    players[3] = players[3] + chinni;
    cout<<"Please enter ajay score: "<<endl;cin>>ajay;
    players[4] = players[4] + ajay;
  }
  return 0;
}
