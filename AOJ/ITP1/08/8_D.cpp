#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//リング

// 解けなかった

bool with(string& str1, string& str2){
  for(int i = 0; i < str1.size(); i++){
    if(str1[i] == str2[0]){
      if(str1.substr(i, str2.size()) == str2){//str1.substr(i, str2.size())  str1のi番目からstr2.size()分の部分文字列を抽出
        return true;
      }
    }
  }
  return false;
}

int main(){
  string s;
  string p;
  cin >> s >> p;
  s = s + s;

  if(with(s, p)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
//実行結果
// vanceknowledgetoad
// advance
// Yes

// advanced
// vanceknowledgetoadvanceknowledgetoad
// No