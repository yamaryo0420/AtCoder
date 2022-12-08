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

//最大の利益

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  int c = v[0];
  int d = v[1] - v[0];
  for(int i = 1; i < n; i++){
    c = min(c, v[i-1]);
    d = max(d, v[i] - c);
  }
  cout << d << endl;
}