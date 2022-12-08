#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 公舎の入居者数

int main(){
    int n, b, f, r, v;
    cin >> n;
    std::vector<vector<vector<int> > > buildings(4, vector<vector<int> >(3, vector<int>(10)));
    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;

        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 10; l++){
                    if(j == b - 1 && k == f - 1 && l == r - 1){
                        buildings[j][k][l] = v;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 10; k++){
                cout << buildings[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << "####################" << endl;
    }
}

//実行結果
// 3
// 1 1 3 8
// 3 2 2 7
// 4 3 8 1

// 0 0 8 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// ####################
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// ####################
// 0 0 0 0 0 0 0 0 0 0 
// 0 7 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// ####################
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 1 0 0 
// ####################