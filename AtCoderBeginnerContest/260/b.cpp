#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
using namespace std;


int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    vector<int> gokaku;
    int g_index;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int num = 0;
    while(num < x){
        int max_math = -1;
        for (int i = 0; i < n; i++){
            if(a[i] > max_math){
                max_math = a[i];
                g_index = i;
            }
        }
        gokaku.push_back(g_index+1);
        a[g_index] = -10;
        b[g_index] = -10;
        num++;
    }
    num = 0;
    while(num < y){
        int max_en = -1;
        for (int i = 0; i < n; i++){
            if(b[i] > max_en){
                max_en = b[i];
                g_index = i;
            }
        }
        gokaku.push_back(g_index+1);
        a[g_index] = -10;
        b[g_index] = -10;
        num++;
    }
    num = 0;
    while(num < z){
        int max_me = -1;
        for (int i = 0; i < n; i++){
            int sum = a[i] + b[i];
            if(sum > max_me){
                max_me = sum;
                g_index = i;
            }
        }
        gokaku.push_back(g_index+1);
        a[g_index] = -10;
        b[g_index] = -10;
        num++;
    }
    sort(gokaku.begin(), gokaku.end());
    for (int i = 0; i < gokaku.size(); i++) cout << gokaku[i] << endl;
}