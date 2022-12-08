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

int main() {
    int q;
    cin >> q;
    multiset<int> st;
    rep(i, q){
        int n;
        cin >> n;
        if(n == 1){
            int x;
            cin >> x;
            st.insert(x);
        }
        else if(n == 2){
            int x, c;
            cin >> x >> c;
            rep(j, c){
                if(st.find(x) == st.end()) break;// st.find()のイテレータが末尾に存在する -> xが存在しない
                st.erase(st.find(x));
            }
        } 
        else{
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
}