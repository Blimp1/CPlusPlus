#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<string, int> teamsh;
vector<string> teams;

class Engine
{
    public:
    void add (){
    srand(time(0));
    teamsh["Arsenal"] = (rand() % 7) + 0;
    teamsh["Liverpool"] = (rand() % 7) + 0;
    teamsh["Napoli"] = (rand() % 7) + 0;
    teamsh["Juventus"] = (rand() % 7) + 0;
    teamsh["Real Madrid"] = (rand() % 7) + 0;
    teamsh["Barcelona"] = (rand() % 7) + 0;
    teamsh["Porto"] = (rand() % 7) + 0;
    teamsh["Benfica"] = (rand() % 7) + 0;
    teamsh["Rangers"] = (rand() % 7) + 0;
    teamsh["Celtic"] = (rand() % 7) + 0;
    teamsh["Bayern"] = (rand() % 7) + 0;
    teamsh["Dortmund"] = (rand() % 7) + 0;
    teamsh["PSG"] = (rand() % 7) + 0;
    teamsh["Lyon"] = (rand() % 7) + 0;
    teamsh["Ajax"] = (rand() % 7) + 0;
    teamsh["PSV"] = (rand() % 7) + 0;

    teams.push_back("Arsenal");
    teams.push_back("Juventus");
    teams.push_back("Napoli");
    teams.push_back("Barcelona");
    teams.push_back("Real Madrid");
    teams.push_back("Liverpool");
    teams.push_back("Bayern");
    teams.push_back("Dortmund");
    teams.push_back("PSG");
    teams.push_back("Lyon");
    teams.push_back("Porto");
    teams.push_back("Benfica");
    teams.push_back("Ajax");
    teams.push_back("PSV");
    teams.push_back("Celtic");
    teams.push_back("Rangers");
    };

    public:
    void del (int& x){
    teams.erase(teams.begin()+x);
    };

    


};

int main() 
{
Engine eo;
eo.add();
srand(time(0));
  while (teams.size() != 0){
    
    int h = (rand() % teams.size()) + 0;
    cout<< teams[h] << " " << teamsh[teams[h]] << "-";
    eo.del(h);
    
    int a = (rand() % teams.size()) + 0;
    cout<< teamsh[teams[a]] << " " << teams[a] << endl;
    eo.del(a);
    
    

    //for (int i=0; i < teams.size(); i++){
    //cout<<teams[i]<<endl;
    //};

    //cout<<"\n"<<endl;

  };

  
}
