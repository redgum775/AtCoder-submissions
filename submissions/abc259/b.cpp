#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  double a, b, d;
  cin >> a >> b >> d;

  double x, y;
  double radian  = d* (M_PI/180);
  x = a * cos(radian ) - b * sin(radian );
  y = b * cos(radian ) + a * sin(radian );


  cout << fixed << setprecision(16); //�����_�ȉ��̏o�͌����̎w��

  cout << x << " " << y << endl;

  return 0;
}
