#include <iostream>
#include <vector>

// Problem Description
// http://www.codechef.com/problems/SUMTRIAN

using namespace std;

int grab_max(vector<vector<int>>& grid){

  int rows = grid.size();

  for(int i = rows - 2; i >= 0; i--){
    for(int j = 0; j < i+1; j++){
      int val = grid[i][j];
      int below = grid[i+1][j];
      int below_right = grid[i+1][j+1];
      grid[i][j] += max(below, below_right);
    }
  }

  return grid[0][0];
}

int main(){

  int test_cases;
  int numb;

  int val;

  cin >> test_cases;
  for(int i = 0; i < test_cases;i++){
    cin >> numb;
    // Read in the grid
    vector<vector<int>> grid;
    for (int a = 0; a < numb; a++){
      vector<int> line;
      for(int b = 0; b < a+1; b++){
        cin >> val;
        line.push_back(val);
      }
      grid.push_back(line);
    }
  
    int max= grab_max(grid);
    cout << max << endl;
  }

  return 0;
}