#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//大文字と小文字の入れ替え

// 解けなかった

int main(){
  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++){
    if('A' <= s[i] && s[i] <= 'Z'){//文字コード順
      s[i] = 'a' +s[i]-'A';//s[i]が'B'の時、'B' - 'A' = 1(文字コードの差) で'a' + 1 = 'b'になる
    }else if('a' <= s[i] && s[i] <= 'z'){
      s[i] = 'A' +s[i]-'a';
    }
  }
	cout << s << endl;
}

//実行結果
// fAIR, LATER, OCCASIONALLY CLOUDY.
// Fair, later, occasionally cloudy.
