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
    int num;
    bool flag = false;
    for(int i = 1; i <= n; i++){
        double x = i * 1.08;
        if((int)x == n){
            num = i;
            flag = true;
            break;
        }
    }
    if(flag) cout << num << endl;
    else cout << ":(" << endl;
}
