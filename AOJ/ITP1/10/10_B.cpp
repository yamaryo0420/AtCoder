#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 三角関数

int main(){
  int a, b, C;
  cin >> a >> b >> C;
  // cos 関数や sin 関数の引数の単位は「度」ではなくラジアンです。入力が度で与えられたら、2πラジアン = 360度 より、度からラジアンに変換する必要
  double rad = C * M_PI / 180;
  double S = (a * b * sin(rad)) / 2;
  double L = a + b + sqrt((pow(a, 2) + pow(b, 2)));
  double h = 2 * S / a;
  cout << S << " " << L << " " << h << endl;
}
//実行結果

