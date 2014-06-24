#include <iostream>

using namespace std;

int main(){

  int A,B;
  cin >> A >> B;
  int diff = A - B;
  int last_digit = diff % 10;

  if (last_digit < 9){
    cout << diff + 1 << endl;
  }
  else{
    cout << diff - 1 << endl;
  }
  return 0;
}