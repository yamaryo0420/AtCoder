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


int main(){
  int k;
  cin >> k;
  
  if(k == 0) cout << "21:00"<< endl;
  else if(k < 10) cout << "21:0" << k << endl;
  else if(k < 60) cout << "21:" <<  k << endl;
  else if(k == 60) cout << "22:00" << endl;
  else if(k < 70) cout << "22:0" << k - 60 << endl;
  else cout << "22:" << k - 60 << endl;
}