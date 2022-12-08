#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//単語の検索

int main(){
  string w;
  string t;
  cin >> w;
  int cnt = 0;
  while (1){
    cin >> t;
    if (t == "END_OF_TEXT"){
      break;
    }
    for(int i = 0; i < t.size(); i++){
      t[i] = tolower(t[i]);//全部小文字に変換
    }
    if(t == w){
      cnt++;
    }
  }
  cout << cnt << endl;
}
//実行結果
// computer
// Nurtures computer scientists and highly skilled computer engineers
// who will create and exploit knowledge for the new era
// Provides an outstanding computer environment
// END_OF_TEXT
// 3