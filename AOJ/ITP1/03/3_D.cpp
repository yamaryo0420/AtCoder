#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 約数の数

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(c % i == 0){
            cnt++;
        }
    }
    cout << cnt << endl;
}

// 実行結果
// 5 14 80

// 3