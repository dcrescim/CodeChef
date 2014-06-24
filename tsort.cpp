#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*
int get_numb(const string& line){
  int val;
  bool gotValue;
  for(int i = 0;i< line.length(); i++){
    if(line[i] == ' '){
      if(gotValue) return val;
      value = 0;
      gotValue = false;
      continue
    }
    value = value*10 + line[i] - '0';
    gotValue = true
  }
  if(gotValue) return val;
  return -1;
}*/

/*
class FastIO{

};
*/





int main(){
  
  fp = stdin;
  int t;
  fscan

  cin >> t;

  int holder[t];
  int counting_sort[1000001] = {};

  int cur_val;
  for(int i=0; i<t; i++){
    cin >> cur_val;
    counting_sort[cur_val] += 1;
  }

  for(int i= 0; i < 1000001;i++){
    cur_val = counting_sort[i];
    for(int j=0; j < cur_val; j++){
      cout << i << endl;
    }
  }
}