#include <iostream>

using namespace std;

int Z(int n){
  int start = 5;
  int count = 0;
  while(start <= n){
    count += n / start;
    n = n / start;
  }
  return count;
}


int main(){

  int t;
  int val;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> val;
    cout << Z(val) << endl;
  }

  return 0;
}