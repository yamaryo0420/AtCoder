#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 2 つの数の交換

struct num{
    int m, n;
};

int main(){
    std::vector<num> vals;
    num val;
    int i = 0;
    while (1){
        cin >> val.m >> val.n;
        if(val.m == 0 && val.n == 0){
            break;
        }
        else{
            vals.push_back(val);
        }
        if(vals[i].m > vals[i].n){
            std::swap(vals[i].m, vals[i].n);
        }
        i++;
    }
    for(int i = 0; i < vals.size(); i++){
        cout << vals[i].m << " " << vals[i].n << endl;
    }
}

// 実行結果
// 3 2
// 2 2
// 5 3
// 0 0

// 2 3
// 2 2
// 3 5
