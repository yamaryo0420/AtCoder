#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// カードゲーム

struct card{
  string t, h;
};

int main(){
  int n;
  cin >> n;
  vector<card> cr;
  int cnt_t = 0;
  int cnt_h = 0;
  for(int i = 0; i < n; i++){
    card s;
    cin >> s.t >> s.h;
    cr.push_back(s);

    if(cr[i].t < cr[i].h){
      cnt_h += 3;
    }
    else if(cr[i].t == cr[i].h){
      cnt_t ++;
      cnt_h ++;
    }
    else{
      cnt_t += 3;
    }
  }
  cout << cnt_t << " " << cnt_h << endl;
}
//実行結果
// 3
// cat dog
// fish fish
// lion tiger
// 1 7