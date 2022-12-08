#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// ベクトルと行列の積

int main(){
    int n, m;
    cin >> n >> m;
    std::vector<vector<int> > A(n, vector<int>(m));
    std::vector<int> B(m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < m; j++){
            c += A[i][j] * B[j];
        }
        cout << c << endl;
    }
}

//実行結果
// 3 4
// 1 2 0 1
// 0 3 0 1
// 4 1 1 0
// 1
// 2
// 3
// 0

// 5
// 6
// 9