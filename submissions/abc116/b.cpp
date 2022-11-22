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

bool a[1000001];

int main() {
  int s;
  cin >> s;

  int fx = s;
  a[fx] = true;
  int idx = 1;
  while(true){
    idx++;

    if(fx % 2 == 0) fx = fx / 2;
    else fx = 3 * fx + 1;

    if(a[fx]) break;
    else a[fx] = true;
  }

  cout << idx << endl;

  return 0;
}
