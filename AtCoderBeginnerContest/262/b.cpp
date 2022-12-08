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
    int n, m;
    cin >> n >> m;
    vector<vector<bool> > G(n, vector<bool>(n));
    int cnt = 0;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        G[u-1][v-1] = G[v-1][u-1] = true;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (G[i][j] && G[j][k] && G[k][i]) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}