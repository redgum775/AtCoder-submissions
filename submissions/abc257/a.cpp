//#include <bits/stdc++.h>
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

string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
  double N, X;
  cin >> N >> X;


//cout << fixed << setprecision(10); //�����_�ȉ�1 1�̏o�͌����̎w��

  cout << abc[ceil(X / N) - 1] << endl;

  return 0;
}
