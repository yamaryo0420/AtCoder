#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 組み合わせの数(全探索)

int main() {
    int N, X, ans = 0;
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            int k = X - i - j;
            if(j < k && k <= N) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
//実行結果
// 5 9
// 0 0

// 2