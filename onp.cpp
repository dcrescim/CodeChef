#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>
#include <exception>

// Problem Description
// http://www.codechef.com/problems/ONP

using namespace std;

int scan(const string& line, int start){
  int count = 1;
  for(int i = start+1; i < line.size(); i++){
    if (line[i] == '('){
      count += 1;
    }
    else if(line[i] == ')'){
      count -= 1;
    }
    if (count == 0){
      return i;
    }
  }
  throw std::invalid_argument("Not matched parentheses");
}

string scan_paren(const string& line, int start, int end){
  stack<string> text;
  int first_start = start+1;
  int first_end;
  char first = line[first_start];
  string first_val;
  string second_val;
  if (first == '('){
    first_end = scan(line, first_start+1);
    first_val = scan_paren(line, first_start, first_end);
  }
  else{
    first_end = first_start;
    first_val = string {line[first_start]};
  }
  //cout << first_end << endl;
  string oper = string {line[first_end+1]};

  int second_start = first_end + 2;
  char second = line[second_start];
  //cout << second << endl;
  int second_end;
  if (second == '('){
    second_end = scan(line, second_start+1);
    second_val = scan_paren(line, second_start, second_end);
  }
  else{
    second_end = second_start;
    second_val = string {line[second_start]};
  }
  //cout << second_val << endl;

  return first_val + second_val + oper;

}

int main(){
  
  int t;
  scanf("%d\n", &t);

  /*
  string line {"(a+(b*c))"};
  cout << postfix(line,0,8) << endl;
  */
  
  for(int i=0; i < t; i++){
    string line;
    getline(cin, line);
    cout << scan_paren(line,-1,line.size()) << endl;
  }
}