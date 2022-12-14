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

  string mattching = "abcdefghijklmnopqrstuvwxyz";

  sort(S.begin(), S.end());
  for(char c : S){
    if(c == mattching[0]){
      mattching.erase(0, 1);
    }
  }

  cout << ((mattching.size() != 0) ? mattching.substr(0, 1) : "None") << endl;

  return 0;
}
