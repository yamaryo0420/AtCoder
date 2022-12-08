#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;


int main(){
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '1'){
      cnt++;
    }
  }
  cout << cnt << endl;
}