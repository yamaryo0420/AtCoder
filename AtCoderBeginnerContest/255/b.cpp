#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

struct Point{
  long long x, y;
};

long long distance(Point a, Point b){
  double d = 0;
  d += (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
  return d;
}

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A;
  for (int i = 0; i < K; i++){
    int a;
    cin >> a;
    A.push_back(a);
  }
  vector<Point> man;
  for (int i = 0; i < N; i++){
    Point p;
    cin >> p.x >> p.y;
    man.push_back(p);
  }
  
  long long res = 0;
  for (int i = 0; i < N; i++){
    long long cres = 1e18;
    for (int j = 0; j < K; j++){
      cres = min(cres, distance(man[i], man[A[j]-1]));
    }
    res = max(res, cres);
  }
  printf("%.12lf\n",sqrt((double)res));
}
