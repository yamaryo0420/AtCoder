#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

//各桁の和

// 解けなかった

int main(){
  while(1){
    string str;
    cin>> str;
    if(str == "0"){
      break;
    }
    int sum = 0;
    for(int i = 0;i < str.size(); i++){
      sum += str[i] - '0';//char型は文字コードに変換されてint型に変換できる
    }
    cout<< sum <<endl;
  }
}

//実行結果
// 123
// 55
// 1000
// 0

// 6
// 10
// 1