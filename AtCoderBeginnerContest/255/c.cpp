#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

int main(){
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  
  if(d < 0){
    ll fi = a + d * (n - 1);
    a = fi;
    d *= -1;
  }
  ll st = a, fi = a + d * (n - 1);
  if(st <= x && x <= fi){
    //二分探索で X以下の最大の項とX以上の最小の項を探す
    ll str = 0, fin = n - 1;
    while(str <= fin){
      ll mi = (str + fin) / 2;
      if((a + d * mi) < x){
        str = mi + 1;
      }
      else{
        fin = mi - 1;
      }
    }
    cout << min(abs(a + d * str - x), abs(a + d * fin - x)) << endl;
  }
  else if(x < st){
    cout << st - x << '\n';
  }
  else{
    cout << x - fi << '\n';
  }
}