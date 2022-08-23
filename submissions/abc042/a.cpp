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
  int A, B, C;
  cin >> A >> B >> C;

  string s =  "NO";

  if(A == 5 && B == 7 && C == 5) s = "YES";
  if(A == 7 && B == 5 && C == 5) s = "YES";
  if(A == 5 && B == 5 && C == 7) s = "YES";

  cout << s << endl;

  return 0;
}
