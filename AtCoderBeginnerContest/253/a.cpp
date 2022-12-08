#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    vector<int> b = a;
    sort(b.begin(), b.end());
    if(a[1] == b[1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}