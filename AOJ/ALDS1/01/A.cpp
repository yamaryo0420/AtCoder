#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

// 挿入ソート

void insertionSort(vector<int>& a, int n){
  for(int i = 1; i < n; i++){
    int v = a[i];
    int j = i - 1;
    while(j >= 0 && a[j] > v){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    for (int j = 0; j < n; j++) cout << (j == 0 ? "": " ") << a[j];
    cout << endl;
  }
} 

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cout << (i == 0 ? "": " ") << a[i];
  cout << endl;
  insertionSort(a, n);
}