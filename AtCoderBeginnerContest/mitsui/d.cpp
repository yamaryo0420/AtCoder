#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < 1000; i++){
        vector<int> a(3);
        a[0]=  i / 100, a[1] = (i / 10) % 10, a[2] = i % 10;
        int process = 0;
        for (int j = 0; j < n; j++) {
            if (process <= 2 && a[process] == (int)(s[j] - '0')) process++;
        }
        if (process == 3) cnt += 1;
    }
    cout << cnt << endl;
}