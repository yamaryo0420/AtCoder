#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N), h(N);
    for(int i = 0; i < N; i++) cin >> x[i] >> y[i] >> h[i];

    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            bool flag = true;
            int H = 1;
            for (int k = 0; k < N; k++) {//この頂点から見て、頂上が(xi, yj)の時にどれくらいの高さであって欲しいか求める
                if (h[k] > 0) H = h[k] + abs(x[k] - i) + abs(y[k] - j);
            }
            for (int k = 0; k < N; k++) {
                if (max(H - abs(x[k] - i) - abs(y[k] - j), 0) != h[k]) flag = false;
            }
            if (flag) cout << i << " " << j << " " << H << endl;
            return 0;
        }
    }
}