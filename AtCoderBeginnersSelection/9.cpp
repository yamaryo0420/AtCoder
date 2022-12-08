#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

// 白昼夢

int main(){
  string S;
  cin >> S;
  string T[4] = {"dream", "dreamer", "erase", "eraser"};
// 後ろから解くかわりにすべての文字列を「左右反転」する
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++){
    reverse(T[i].begin(), T[i].end());
  }
  
  bool flag = true;
  for (int i = 0; i < S.size();){
    bool can = false;
    for (int j = 0; j < 4; j++){
      string s = T[j];
      if (S.substr(i, s.size()) == s){
        i += s.size();
        can = true;
      }
    }
    if (!can){
      flag = false;
      break;
    }
  }
  if (flag){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}

//実行結果
// dreameraser
// YES