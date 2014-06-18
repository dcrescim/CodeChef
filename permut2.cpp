#include <iostream>

// Problem Description
// http://www.codechef.com/problems/PERMUT2

using namespace std;

bool is_ambiguous(int arr[], int length){
  for(int i = 0; i < length; i++){
    int val = arr[i];
    if (arr[val - 1] != i+1){
      return false;
    }
  }
  return true;
}

int main(){

  int n;
  int val;

  while(cin >> n){
    if(n == 0){
      break;
    }

    // Read in the array
    int arr[n];
    for (int i = 0; i < n; i++){
      cin >> val;
      arr[i] = val;
    }
    // Check if ambiguous
    if (is_ambiguous(arr, n)){
      cout << "ambiguous" << endl;
    }
    else{
      cout << "not ambiguous" << endl;
    }
  }
  return 0;
}