#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 文字列変換

// 解けなかった

int main(){
  string str;
  cin >> str;
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    string s;
    cin >> s;
    if(s == "replace"){
      int a, b; 
      string p;
      cin >> a >> b >> p;
      str.replace(a, b - a + 1, p);
    }
    else if(s == "reverse"){
      int a, b;
      cin >> a >> b;
      reverse(str.begin() + a, str.begin() + b + 1);
    }
    else{
      int a, b;
      cin >> a >> b;
      cout << str.substr(a, b - a + 1) << endl;
    }
  }
}
//実行結果
// abcde
// 3
// replace 1 3 xyz
// reverse 0 2
// print 1 4

// xaze