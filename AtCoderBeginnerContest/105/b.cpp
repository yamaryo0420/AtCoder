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
    bool flag = false;
    for(int i = 0; i < 25; i++){
        for(int j = 0; i < 15; j++){
            int x = 4 * i + 7 * j;
            if(x == n){
                flag = true;
                cout << "Yes" << endl;
                return 0;
            }
            else if (x > n){
                break;
            }
        }
    }
    if(!flag) cout << "No" << endl;
}
