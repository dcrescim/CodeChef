#include <iostream>

using namespace std;

int main(){

  int t;
  cin >> t;

  int team_1_score = 0;
  int team_2_score = 0;
  int max_team_1_lead = 0;
  int max_team_2_lead = 0;

  for(int i=0;i < t; i++){
    int team_1_round;
    int team_2_round;
    cin >> team_1_round >> team_2_round;

    team_1_score += team_1_round;
    team_2_score += team_2_round;

    if (team_1_score > team_2_score){
      max_team_1_lead = max(max_team_1_lead, team_1_score - team_2_score);
    }
    else{
      max_team_2_lead = max(max_team_2_lead, team_2_score - team_1_score);
    }
  }

  if (max_team_1_lead > max_team_2_lead){
    cout << "1 " << max_team_1_lead << endl;
  }
  else{
    cout << "2 " << max_team_2_lead << endl;
  }

  return 0;
}