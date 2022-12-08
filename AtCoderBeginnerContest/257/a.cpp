#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    string abc = "";
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < N; j++){
            abc += 'A' + i;
        }
    }
    cout << abc[X - 1] << endl;
}