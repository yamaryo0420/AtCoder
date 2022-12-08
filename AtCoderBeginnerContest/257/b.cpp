#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

int main(){
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> math(N); //1あり0なし
  vector<int> A;
  for(int i = 0; i < K; i++){
    int a;
    cin >> a;
    math[a-1]++;
    A.push_back(a);
  }
  
  for(int i = 0; i < Q; i++){
    int l;
    cin >> l;
    if(A[l-1] != N){
      if(math[A[l-1]] == 0){
        math[A[l-1]] = 1;
        math[A[l-1]-1] = 0;
        A[l-1]++;
      }
    }
  }
  
  for(int i = 0; i < N; i++){
    if(math[i] == 1){
      cout << i + 1 << (i < N ? " ": "");
    }
  }
  cout << endl;
}

//実行結果
// 10 6 9
// 1 3 5 7 8 9
// 1 2 3 4 5 6 5 6 2

// 2 5 6 7 9 10

