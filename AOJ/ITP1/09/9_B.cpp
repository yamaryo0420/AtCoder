#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// シャッフル

int main(){
  string s;
  cin >> s;
  int m;
  cin >> m;
  for(int i = 0; i < m; i++){
    int h;
    cin >> h;
    string str = s.substr(0, h);
    s.erase(0, h);
    s += str;
  }
  cout << s << endl;
}

//実行結果
// aabc
// 3
// 1
// 2
// 1
// aabc

// vwxyz
// 2
// 3
// 4
// -
// xyzvw
