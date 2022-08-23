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
  int S;
  int T;
  cin >> S >> T;

  int count = 0;

  for(int a = 0; a <= S; a++){
    for(int b = 0; b <= S - a; b++){
      for(int c = 0; c <= S - a - b; c++){
        if(a * b * c <= T) count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
