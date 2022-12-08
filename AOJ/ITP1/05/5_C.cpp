#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// チェスボードの描画

struct Rectangle{
    int H, M;
};

int main(){
    std::vector<Rectangle> vals;
    Rectangle r;
    while(1){
        cin >> r.H >> r.M;
        if(r.H == 0 && r.M == 0){
            break;
        }
        else{
            vals.push_back(r);
        }
    }
    int cnt = 1;
    for(int i = 0; i < vals.size(); i++){
        for(int j = 0; j < vals[i].H; j++){
            for(int k = 0; k < vals[i].M; k++){
                if(j % 2 == 0){
                    if(k % 2 == 0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(k % 2 == 0){
                        cout << ".";
                    }
                    else{
                        cout << "#";
                    }
                }
                cnt++;
            }
            cout << endl;
        }
        cout << endl;
    }
    
}

//実行結果
// 3 4
// 5 6
// 3 3
// 2 2
// 1 1
// 0 0

// #.#.
// .#.#
// #.#.

// #.#.#.
// .#.#.#
// #.#.#.
// .#.#.#
// #.#.#.

// #.#
// .#.
// #.#

// #.
// .#

// #