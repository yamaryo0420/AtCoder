#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

// 鏡餅

int main(){
  int N;
  cin >> N;
  vector<int> D;
  for(int i = 0; i < N; i++){
    int d;
    cin >> d;
    D.push_back(d);
  }
  sort(D.begin(), D.end());
  reverse(D.begin(), D.end());
  int cnt = 1, max = D[0];
  for(int i = 1; i < D.size(); i++){
    if(max > D[i]){
      cnt++;
      max = D[i];
    }
  }
  cout << cnt << endl;
}
//実行結果
// 7
// 50
// 30
// 50
// 100
// 50
// 80
// 30

// 4