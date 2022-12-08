#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

//素数判定

bool is_prime(int x){
  if(x == 2) return true;
  if(x < 2 || x % 2 == 0) return false;
  for(int i = 3; i <= sqrt(x); i += 2){
    if(x % i == 0) return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  int cnt = 0;
  rep(i, n){
    cin >> v[i];
    if(is_prime(v[i])) cnt++;
  }
  cout << cnt << endl;
}