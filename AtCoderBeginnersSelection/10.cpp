#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

// Traveling

// パリティ

// 解けなかった

struct Point{
  int t, x, y;
};

int main(){
  int N;
  cin >> N;
  vector<Point> pts(N+1);
  pts[0].t = pts[0].x = pts[0].y = 0;
  for (int i = 1; i < N + 1; i++){
    cin >> pts[i].t >> pts[i].x >> pts[i].y;
  }
  bool flag = true;
  for (int i = 0; i < N; i++){
    int dt = pts[i+1].t - pts[i].t;
    int dist = abs(pts[i+1].x - pts[i].x) + abs(pts[i+1].y - pts[i].y);
    if(dist > dt || dist % 2 != dt % 2){
      flag = false;
    }
  }
  if (flag){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}

//実行結果
