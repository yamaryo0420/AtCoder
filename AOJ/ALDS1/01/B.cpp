#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

// 最大公約数

int gcd(int a, int b){
  if(a < b) swap(a, b);
  while(b != 0){//ユークリッドの互除法
    int tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}

int main(){
  int x, y;
  cin >> x >> y;
  cout << gcd(x, y) << endl;
}