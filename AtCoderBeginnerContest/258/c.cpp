#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;

int main(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int p = 0;
    for(int i = 0; i < q; i++){
        int type, x;
        cin >> type >> x;
        if(type == 1) p = (p - x + n) % n;
        else cout << s[(p+x-1)%n] << endl;
    }
}
