#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 長方形の中の円

struct Point{
    int x;
    int y;
};
struct Circle{
    Point center;
    int r;

    bool flag(Point p){
        if(r <= center.x && r <= center.y && p.x - r >= center.x && p.y - r >= center.y){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Point p;
    Circle c;
    cin >> p.x >> p.y >> c.center.x >> c.center.y >> c.r;
    if(c.flag(p)){
        cout << "Yes"<< endl;
    }
    else{
        cout << "No" << endl;
    }
}
//実行結果

// 5 4 2 2 1
// Yes

// 5 4 2 4 1
// No