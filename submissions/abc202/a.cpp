//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin >> a >> b >> c;

//cout << fixed << setprecision(10); //�����_�ȉ��̏o�͌����̎w��
  int num = 0;
  num += 7 - a;
  num += 7 - b;
  num += 7 - c;
  cout << num << endl;

  return 0;
}
