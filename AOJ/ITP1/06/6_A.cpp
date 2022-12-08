#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 数列の反転

int main(){
    std::vector<int> vals;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vals.push_back(x);
    }
    std::reverse(vals.begin(), vals.end());
    for(int i = 0; i < n; i++){
        cout << vals[i] << (i < n ? " ": "");
    }
    cout << endl;
}

//実行結果
// 6
// 1 5 2 4 8 6

// 8 6 5 4 2 1 