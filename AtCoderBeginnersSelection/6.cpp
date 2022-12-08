#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

// Card Game for Two

int main(){
  int N;
  cin >> N;
  vector<int> A;
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    A.push_back(a);
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());
  int Alice = 0, Bob = 0;
  for(int i = 0; i < A.size(); i++){
    if(2*i < A.size()){
      Alice += A[2*i];
      if(2*i+1 < A.size()){
        Bob += A[2*i+1];
      }
    }
    else{
      break;
    }
  }
  cout << Alice - Bob << endl;
}
//実行結果
// 4
// 20 18 2 18

// 18