#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

//Otoshidama

// 解けなかった

#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for (int a = 0; a <= N; ++a) {  // 10000円の枚数を 0 〜 N で調べる
        for (int b = 0; b + a <= N; ++b) {  // 5000円の枚数を 0 〜 N-a で調べる
            int c = N - a - b;  // 1000円の枚数は決まる
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}

//実行結果
// 9 45000
// 4 0 5

// 20 196000
// -1 -1 -1

// 1000 1234000
// 2 54 944