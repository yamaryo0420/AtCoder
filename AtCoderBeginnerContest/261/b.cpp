#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<char> > a(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j] == 'W' && a[j][i] == 'L') continue;
            else if(a[i][j] == 'L' && a[j][i] == 'W') continue;
            else if(a[i][j] == 'D' && a[j][i] == 'D') continue;
            else if(a[i][j] == '-' && a[j][i] == '-') continue;
            else{
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct" << endl;
}