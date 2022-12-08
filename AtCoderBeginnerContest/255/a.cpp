#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;


int main(){
  int R, C;
  cin >> R >> C;
  int A[2][2];
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      int a;
      cin >> A[i][j];
    }
  }
  cout << A[R-1][C-1] << endl; 
}
