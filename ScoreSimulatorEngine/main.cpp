#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<string, int> teamsh;
vector<string> teams;

int scorearray [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,6,6,6,7,7};

class Engine
{
    public:
    void add (){
    srand(time(0));
    teamsh["Arsenal"] = scorearray[(rand() % 99) + 0];
    teamsh["Liverpool"] = scorearray[(rand() % 99) + 0];
    teamsh["Napoli"] = scorearray[(rand() % 99) + 0];
    teamsh["Juventus"] = scorearray[(rand() % 99) + 0];
    teamsh["Real Madrid"] = scorearray[(rand() % 99) + 0];
    teamsh["Barcelona"] = scorearray[(rand() % 99) + 0];
    teamsh["Porto"] = scorearray[(rand() % 99) + 0];
    teamsh["Benfica"] = scorearray[(rand() % 99) + 0];
    teamsh["Rangers"] = scorearray[(rand() % 99) + 0];
    teamsh["Celtic"] = scorearray[(rand() % 99) + 0];
    teamsh["Bayern"] = scorearray[(rand() % 99) + 0];
    teamsh["Dortmund"] = scorearray[(rand() % 99) + 0];
    teamsh["PSG"] = scorearray[(rand() % 99) + 0];
    teamsh["Lyon"] = scorearray[(rand() % 99) + 0];
    teamsh["Ajax"] = scorearray[(rand() % 99) + 0];
    teamsh["PSV"] = scorearray[(rand() % 99) + 0];

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
  };
}
