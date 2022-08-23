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
  cin >> N;

  if(N <= 125){
    cout << 4 << endl;
  }else if(126 <= N & N <= 211){
    cout << 6 << endl;
  }else{
    cout << 8 << endl;
  }

  return 0;
}
