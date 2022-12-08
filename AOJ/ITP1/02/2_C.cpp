#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 3 つの数の整列

int main(){
    std::vector<int> vals;
    for(int i = 0; i < 3; i++){
        int n;
        cin >> n;
        vals.push_back(n);
    }
    std::sort(vals.begin(), vals.end());
    for(int i = 0; i < 3; i++){
        cout << vals[i] << (i < 3 ? " ": "");
    }
    std::cout << "\n";
}

// 実行結果
// 3 8 1

// 1 3 8