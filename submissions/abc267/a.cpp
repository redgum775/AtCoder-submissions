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
  string S;
  cin >> S;

  if(S == "Monday") cout << 5 << endl;
  if(S == "Tuesday") cout << 4 << endl;
  if(S == "Wednesday") cout << 3 << endl;
  if(S == "Thursday") cout << 2 << endl;
  if(S == "Friday") cout << 1 << endl;

  return 0;
}
