#include <iostream>

using namespace std;

int main(){
  int t;
  scanf("%d\n", &t);

  int val;
  for(int i=0; i< t; i++){
    cin >> val;
    if (val % 2 == 0){
      cout << "ALICE" << endl;
    }
    else{
      cout << "BOB" << endl; 
    }
  }
  return 0;
}