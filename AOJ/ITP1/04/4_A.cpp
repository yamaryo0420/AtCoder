#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 割り算

int main(){
    int a, b;
    cin >> a >> b;
    int d = a / b;
    int r = a % b;
    double f = (double)a / b;

    cout << d << " " << r << " " << f << endl;
}

// 実行結果
// 3 2

// 1 1 1.50000