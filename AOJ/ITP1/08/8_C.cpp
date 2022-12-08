#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 文字のカウント

// 解けなかった

int main(){
  vector<int> abc(26);
  string s;
  while (getline(cin, s)){
    for(int i = 0; i < (int)s.size(); i++){
      if('A' <= s[i] && s[i] <= 'Z'){
        abc[s[i] - 'A']++;
      }
      if('a' <= s[i] && s[i] <= 'z'){
        abc[s[i] - 'a']++;
      }
    }
  }
  for(int i = 0 ; i < 26; i++){
    cout << (char)('a' + i) << ":" << abc[i] << endl;
  }
}

//実行結果
// This is a pen.

// a:1
// b:0
// c:0
// d:0
// e:1
// f:0
// g:0
// h:1
// i:2
// j:0
// k:0
// l:0
// m:0
// n:1
// o:0
// p:1
// q:0
// r:0
// s:2
// t:1
// u:0
// v:0
// w:0
// x:0
// y:0
// z:0