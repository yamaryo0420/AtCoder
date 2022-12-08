#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    vector<int> p;
    for(int i = 0; i < n; i++) p.push_back(i);

    long double sum = 0;
    do {
        for(int i = 0; i < n-1; i++) {
            int a = p[i];
            int b = p[i + 1];

            long double dx = x[a] - x[b];
            long double dy = y[a] - y[b];

            sum += sqrt(dx * dx + dy * dy);
        }
    } while (next_permutation(p.begin(), p.end()));

    for(int i = 0; i < n; i++) sum /= (i + 1);
    printf("%.10Lf\n", sum);
}
