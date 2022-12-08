#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int> > a(n, vector<int>(n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      if(j == i || j == 0){
        a[i][j] = 1;
      }
      else{
        a[i][j] = a[i-1][j-1] + a[i-1][j];
      }
      cout << (j == 0 ? "" : " ") << a[i][j];
    }
    cout << endl;
  }
}