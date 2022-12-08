#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            char c;
            cin >> c;
            a[i][j] = c -'0';
        }
    }
    ll ans = 0;
    vector<int> di = {1, 1, 1, 0, 0, -1, -1, -1}, dj = {1, 0, -1, 1, -1, 1, 0, -1};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){//スタート位置を決める
            for(int k = 0; k < 8; k++){//8方向
                ll x = 0;
                for(int l = 0; l < n; l++){//移動回数
                    x = x * 10 + a[i][j];
                    i += di[k];
                    j += dj[k];
                    //トーラス
                    i = (i % n + n) % n;
                    j = (j % n + n) % n;
                }
                ans = max(ans, x);
            }
        }
    }
    cout<< ans << endl;
}
