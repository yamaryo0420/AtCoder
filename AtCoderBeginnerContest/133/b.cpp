#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<vector<int> > vec(n, vector<int>(d));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> vec[i][j];
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double sum = 0;
            for(int k = 0; k < d; k++){
                sum += pow(vec[i][k] - vec[j][k], 2);
            }
            if(sqrt(sum) == (int)sqrt(sum)) cnt++; //整数判定
        }
    }
    cout << cnt << endl;
}
