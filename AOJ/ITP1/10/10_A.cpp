#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//2点間の距離

struct Point{
  double x, y;
};

double distance(Point a, Point b){
  double d = 0;
  d += (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
  return std::sqrt(d);
}
int main(){
  Point p, q;
  cin >> p.x >> p.y >> q.x >> q.y;
  cout << distance(p, q) << endl;
}
//実行結果