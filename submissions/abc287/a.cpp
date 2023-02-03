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
  int N;
  int count = 0;
  cin >> N;
  string ans;
  for(int i = 0; i < N; i++){
    cin >> ans;
    if(ans == "For") count++;
  }

  cout << (N / 2 < count ? "Yes" : "No") << endl;

  return 0;
}
