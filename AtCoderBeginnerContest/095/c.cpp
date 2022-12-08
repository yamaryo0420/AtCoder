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
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    long long sum = 0LL;
    long long min = 99999999999999LL;


    for(int i = 0; i/2 <= X ; i+=2){
        //i : AB
        long long j = X - i/2;
        long long k = Y - i/2;
        if(k < 0) k = 0;

        sum = i * C + j * A + k * B;
        if(min > sum) min = sum;
    }

    for(int i = 0; i/2 <= Y ; i+=2){
        //i : AB
        long long j = X - i/2;
        long long k = Y - i/2;
        if(j < 0) j = 0;

        sum = i * C + j * A + k * B;
        if(min > sum) min = sum;
    }
    cout << min << endl;
}