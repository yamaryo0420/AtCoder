#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

//標準偏差

int main(){
  int n;
  while (1){
    cin >> n;
    if(n == 0){
      break;
    }
    vector<double> s;
    double a = 0;
    double sum = 0;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      s.push_back(x);
      sum += x;
    }
    double m = sum / n;
    for(int i = 0; i < n; i++){
      a += pow(s[i] - m, 2) / n;
    }
    cout << fixed;
    cout << setprecision(8) <<  sqrt(a) << endl;
  }
}

//実行結果
// 5
// 70 80 100 90 20
// 3
// 80 80 80
// 0

// 27.85677655
// 0.00000000