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
    vector<int> a(n+1);
    int cnt = 0;
    for(int i = 1; i < n+1; i++){
        cin >> a[i];
        if(a[i] == i) cnt++;
    }
    long long ans = (long long)cnt * (cnt-1) / 2;
    for(int i = 1; i < n+1; i++){
        if (a[i] > i && a[a[i]] == i) ans++;
    }
    cout << ans << endl;
}