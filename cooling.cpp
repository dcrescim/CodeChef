#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

  int t;
  cin >> t;

  while(t--){
    int numb;
    cin >> numb;

    vector<int> pies;
    for(int i=0;i< numb; i++){
      int pie;
      cin >> pie;
      pies.emplace_back(pie);
    }

    vector<int> racks;
    for(int i=0;i< numb; i++){
      int rack;
      cin >> rack;
      racks.emplace_back(rack);
    }

    sort(pies.begin(), pies.end());
    sort(racks.begin(), racks.end());

    int total_count = 0;
    int j = 0;
    for(int i = 0; i< racks.size(); i++){
      if (j >= pies.size()) break;
      if(racks[i] >= pies[j]){
        j+= 1;
        total_count += 1;
      }
    }
    cout << total_count << endl;
  }
}