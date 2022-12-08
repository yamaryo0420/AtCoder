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
  vector<int> A;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    A.push_back(x);
  }
  int cnt = 0;
  int flag = 0;
  while(1){
    for(int i = 0; i < n; i++){
      if(A[i] % 2 == 0){
        A[i] /= 2;
      }
      else{
        flag = 1;
      }
    }
    if(flag == 1){
      break;
    }
    else{
      cnt++;
    }
  }
  cout << cnt << endl;
}