#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

// 不足しているカードの発見

int main(){
    int n;
    cin >> n;
    std::vector<vector<int> > cards(4, vector<int>(13));
    for(int i = 0; i < n; i++){
        char Z;
        int x;
        cin >> Z >> x;
        if(Z == 'S'){
            cards[0][x]++;
        }
        if(Z == 'H'){
            cards[1][x]++;
        }
        if(Z == 'C'){
            cards[2][x]++;
        }
        if(Z == 'D'){
            cards[3][x]++;
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 1; j < 13; j++){
            if(i == 0){
                if(cards[i][j] == 0){
                    cout << "S " << j << endl;
                }
            }
            else if(i == 1){
                if(cards[i][j] == 0){
                    cout << "H " << j << endl;
                }
            }
            else if(i == 2){
                if(cards[i][j] == 0){
                    cout << "C " << j << endl;
                }
            }
            else{
                if(cards[i][j] == 0){
                    cout << "D " << j << endl;
                }
            }
        }
    }
}

//実行結果
// 47
// S 10
// S 11
// S 12
// S 13
// H 1
// H 2
// S 6
// S 7
// S 8
// S 9
// H 6
// H 8
// H 9
// H 10
// H 11
// H 4
// H 5
// S 2
// S 3
// S 4
// S 5
// H 12
// H 13
// C 1
// C 2
// D 1
// D 2
// D 3
// D 4
// D 5
// D 6
// D 7
// C 3
// C 4
// C 5
// C 6
// C 7
// C 8
// C 9
// C 10
// C 11
// C 13
// D 9
// D 10
// D 11
// D 12
// D 13

// S 1
// H 3
// H 7
// C 12
// D 8