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

bool judge(int num){
  for(int i = 2; i < 400; i++){
    if(num == i * i) return true;
  }
  return false;
}

int main() {
  string a, b;
  cin >> a >> b;

  int num = stoi(a+b);

  cout << (judge(num) ? "Yes" : "No") << endl;

  return 0;
}
