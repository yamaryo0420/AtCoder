#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 成績評価の判定

struct score{
    int m, f ,r;
};

int main(){
    std::vector<score> vals;
    while (1){
        score s;
        cin >> s.m >> s.f >> s.r;  
        if(s.m == -1 && s.f == -1 && s.r == -1){
            break;
        }
        vals.push_back(s);
    }
    for(int i = 0; i < vals.size(); i++){
        if(vals[i].m == -1 || vals[i].f == -1){
            cout << "F" << endl;
        }
        if(vals[i].m + vals[i].f >= 80){
            cout << "A" << endl;
        }
        else if(vals[i].m + vals[i].f >= 65){
            cout << "B" << endl;
        }
        else if(vals[i].m + vals[i].f >= 50){
            cout << "C" << endl;
        }
        else if(vals[i].m + vals[i].f >= 30){
            if(vals[i].r >= 50){
                cout << "C" << endl;
            }
            else{
                cout << "D" << endl;
            }
        }
        else{
            cout << "F" << endl;
        }
    }
}

//実行結果
// 40 42 -1
// 20 30 -1
// 0 2 -1
// -1 -1 -1

// A
// C
// F