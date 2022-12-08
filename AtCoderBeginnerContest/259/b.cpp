#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>
#include <set>
using namespace std;

int main(){
  int a, b, d;
  cin >> a >> b >> d;
  double rad = d * M_PI / 180;
  double tmp_a = cos(rad) * a - sin(rad) * b;
  double tmp_b = sin(rad) * a + cos(rad) * b;
  if(d == 180){
    cout << a * (-1) << " " << b * (-1) << endl;
  }
  else{
    cout << fixed;
    cout << setprecision(20) << tmp_a << " "; 
    cout << setprecision(20) << tmp_b << endl;
  }
  
}