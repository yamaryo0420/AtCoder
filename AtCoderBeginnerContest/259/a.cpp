#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;

int main(){
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  
  if(x <= m && m <= n){
    cout << t << endl;
  }
  else{
    cout << (t - x * d) + m * d << endl;
  }
}