#include <iostream>
#include <cstdio>

using namespace std;


int main(){

  int withdraw;
  float balance;

  cin >> withdraw >> balance;

  // Not a multiple of 5
  if (withdraw % 5 != 0){
    cout << balance << endl;
  }

  // Insufficient funds
  else if (balance - withdraw - .5 < 0){
    cout << balance << endl;
  }

  else{
    float val = balance - withdraw - .5;
    printf("%.02f\n", val);
  }

  return 0;

}