#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 計算機

int main(){
    int a, b;
    std::string op;
    std::vector<int> vals;
    int i = 0;
    while (1){
        cin >> a >> op >> b;
        if(op == "?"){
            break;
        }
        if(op == "+"){
            int x = a + b;
            vals.push_back(x);
        }
        if(op == "-"){
            int y = a - b;
            vals.push_back(y);
        }
        if(op == "*"){
            int z = a * b;
            vals.push_back(z);
        }
        if(op == "/"){
            int w = a / b;
            vals.push_back(w);
        }
        i++;
    }
    for(int i = 0; i < vals.size(); i++){
        cout << vals[i] << endl;
    }
}

// 実行結果
// 1 + 2
// 56 - 18
// 13 * 2
// 100 / 10
// 27 + 81
// 0 ? 0

// 3
// 38
// 26
// 10
// 108