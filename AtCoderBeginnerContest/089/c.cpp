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
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    map<char, long long> m;
    string march = "MARCH";

    for(int i = 0; i < N; i++) m[S[i][0]]++;
    long long ans = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                ans += m[march[i]] * m[march[j]] * m[march[k]];
            }
        }
    }
    cout << ans << endl;
}