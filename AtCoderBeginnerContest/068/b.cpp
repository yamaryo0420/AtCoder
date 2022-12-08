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
    int n;
    cin >> n;
    int num = 1;
    int max_cnt = 0;
    for(int i = 1; i <= n; i*=2){
        int cnt = 0;
        int tmp = i;
        while(tmp % 2 == 0){
            tmp /= 2;
            cnt++;
        }
        if(cnt > max_cnt) {
            max_cnt = cnt;
            num = i;
        }
    }
    cout << num << endl;
}
