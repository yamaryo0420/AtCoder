#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

//ミンコフスキー距離

int main(){
  int n;
  cin >> n;
  vector<double> x;
  vector<double> y;
  for(int i = 0; i < n; i++){
    int p;
    cin >> p;
    x.push_back(p);
  }
  for(int i = 0; i < n; i++){
    int p;
    cin >> p;
    y.push_back(p);
  }
  double D_1 = 0, D_2 = 0, D_3 = 0, D_max = 0;
  for(int i = 0; i < n; i++){
    D_1 += fabs(x[i] - y[i]);
    D_2 += pow(fabs(x[i] - y[i]), 2);
    D_3 += pow(fabs(x[i] - y[i]), 3);
    D_max = max(D_max, fabs(x[i] - y[i]));
  }
  cout << fixed;
    cout << setprecision(6) << D_1 << endl;
    cout << setprecision(6) << pow(D_2, 1.0 / 2.0) << endl;
    cout << setprecision(6) << pow(D_3, 1.0 / 3.0) << endl;
    cout << setprecision(6) << D_max << endl;
}

//実行結果
// 3           
// 1 2 3
// 2 0 4
// 4.000000
// 2.449490
// 2.154435
// 2.000000