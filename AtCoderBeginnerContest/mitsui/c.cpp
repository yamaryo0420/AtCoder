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
    int X;
    cin >> X;
    vector<bool> dp(101010);
    dp[0] = true;

    for(int i = 0; i < X; i++){
        if(dp[i]){
            for(int j = 0; j < 6; j++){
                dp[i + j + 100] = true;
            }
        }
    }

    if (dp[X]) cout << "1" << endl;
    else cout << "0" << endl;
}