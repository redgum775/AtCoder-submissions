//#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int angle(int ax, int ay, int bx, int by){
  double r = acos((((double)((ax * bx) + (ay * by))) / ((double)(sqrt(pow(ax, 2) + pow(ay, 2)) * sqrt(pow(bx, 2) + pow(by, 2))))));
  // cout << "r = " << r << ":" << (double)((ax * bx) + (ay * by)) << "/" << (double)(sqrt(pow(ax, 2) + pow(ay, 2)) * sqrt(pow(bx, 1) + pow(by, 1))) << endl;
  if(r < 0){
    r = r + (2 * M_PI);
  }
  return floor(r * (180 / M_PI));
}

bool is180DegreesOrMore(int ax, int ay, int bx, int by){
  return ax*by - ay*bx <= 0;
}

int square[4][2];

int main() {
  for(int i = 0; i < 4; i++){
    cin >> square[i][0] >> square[i][1];
  }

  /*
  int a = angle(square[1][0] - square[0][0], square[1][1] - square[0][1], square[3][0] - square[0][0], square[3][1] - square[0][1]);
  int b = angle(square[0][0] - square[1][0], square[0][1] - square[1][1], square[2][0] - square[1][0], square[2][1] - square[1][1]);
  int c = angle(square[3][0] - square[2][0], square[3][1] - square[2][1], square[1][0] - square[2][0], square[1][1] - square[2][1]);
  int d = angle(square[2][0] - square[3][0], square[2][1] - square[3][1], square[0][0] - square[3][0], square[0][1] - square[3][1]);
  // cout << "a: " << a << endl;
  // cout << "b: " << b << endl;
  // cout << "c: " << c << endl;
  // cout << "d: " << d << endl;
  */

  bool a = is180DegreesOrMore(square[1][0] - square[0][0], square[1][1] - square[0][1], square[3][0] - square[0][0], square[3][1] - square[0][1]);
  bool b = is180DegreesOrMore(square[2][0] - square[1][0], square[2][1] - square[1][1], square[0][0] - square[1][0], square[0][1] - square[1][1]);
  bool c = is180DegreesOrMore(square[3][0] - square[2][0], square[3][1] - square[2][1], square[1][0] - square[2][0], square[1][1] - square[2][1]);
  bool d = is180DegreesOrMore(square[0][0] - square[3][0], square[0][1] - square[3][1], square[2][0] - square[3][0], square[2][1] - square[3][1]);

  // cout << (a+b+c+d>=360 ? "Yes" : "No") << endl;
  cout << ((a || b || c || d) ? "No" : "Yes") << endl;

  return 0;
}
