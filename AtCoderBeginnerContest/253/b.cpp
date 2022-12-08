#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    vector<int> is, js;
    rep(i, h)rep(j, w){
        if(s[i][j] == 'o'){
            is.push_back(i);
            js.push_back(j);
        }
    }
    cout << abs(is[0] - is[1]) + abs(js[0] - js[1]) << endl;
}