#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        if(s.size() % 2 == 1) ans++;
    }
    cout << ans << endl;
}