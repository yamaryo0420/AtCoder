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
    int N, M; cin >> N >> M;
    vector<int> s(M), c(M);
    for(int i = 0; i < M; i++) cin >> s[i] >> c[i];
    int ans = -1;
    for(int i = 999; i >= 0; i--){
        string str = to_string(i);
        if(str.size() != N) continue;
        bool flag = true;
        for(int j = 0; j < M; j++){
            if(str[s[j] - 1] != c[j] + '0') flag = 0; //c[j] + '0' int型をchar型に変換
        }
        if(flag) ans = i;
    }
    cout << ans << endl;
}