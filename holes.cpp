#include <iostream>
#include <string>
using namespace std;

int count_holes(string line){
  int total_count = 0;
  for(auto& el : line){
    if (el == 'A' || el == 'D'|| el=='O'|| el=='P' || el == 'R' || el == 'Q'){
      total_count += 1;
    }
    if (el == 'B'){
      total_count += 2;
    }
  }
  return total_count;
}

int main(){
  int t;
  scanf("%d\n", &t);

  string line;

  for(int i = 0; i < t; i++){
    getline(cin, line); 
    cout << count_holes(line) << endl;

  }
  return 0;
}