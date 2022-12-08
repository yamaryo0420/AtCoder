#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

// 最小値、最大値、合計値

int main(){
    std::vector<int> vals;
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
        vals.push_back(x);
    }
    std::vector<int>::iterator min = std::min_element(vals.begin(), vals.end());
    std::vector<int>::iterator max = std::max_element(vals.begin(), vals.end());

    cout << *min << " " << *max << " " << sum << endl;
}

//実行結果
// 5
// 10 1 5 4 17

// 1 17 37