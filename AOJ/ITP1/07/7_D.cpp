#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//行列の積

int main(){
  int n, m, l;
  cin >> n >> m >> l;
  std::vector<vector<int> > A(n, vector<int>(m));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> A[i][j];
    }
  }
  std::vector<vector<int> > B(m, vector<int>(l));
  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
      cin >> B[i][j];
    }
  }
  std::vector<vector<int> > C(n, vector<int>(l));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      for(int k = 0; k < m; k++){
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      cout << C[i][j] << (j < l ? " ": "");
    }
    cout << endl;
  }
}

//実行結果
// 3 2 3
// 1 2
// 0 3
// 4 5
// 1 2 1
// 0 3 2

// 1 8 5 
// 0 9 6 
// 4 23 14