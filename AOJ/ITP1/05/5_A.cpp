#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 長方形の描画

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
    for(int i = 0; i < vals.size(); i++){
        for(int j = 0; j < vals[i].H; j++){
            for(int k = 0; k < vals[i].M; k++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    
}

//実行結果
// 3 4
// 5 6
// 2 2
// 0 0

// ####
// ####
// ####

// ######
// ######
// ######
// ######
// ######

// ##
// ##