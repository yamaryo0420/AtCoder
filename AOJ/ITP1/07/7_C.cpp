#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 表計算

int main(){
    int r, c;
    cin >> r >> c;
    std::vector<vector<int> > A(r + 1, vector<int>(c + 1));
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        cin >> A[i][j];
      }
    }
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        A[i][c] += A[i][j];
        A[r][j] += A[i][j];
      }
      A[r][c] += A[i][c];
    }
    for(int i = 0; i < r + 1; i++){
      for(int j = 0; j < c + 1; j++){
        cout << A[i][j] << (j < c + 1 ? " ": "");
      }
      cout << endl;
    }
}

//実行結果

// 4 5
// 1 1 3 4 5
// 2 2 2 4 5
// 3 3 0 1 1
// 2 3 4 4 6

// 1 1 3 4 5 14 
// 2 2 2 4 5 15 
// 3 3 0 1 1 8 
// 2 3 4 4 6 19 
// 8 9 9 13 17 56