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

  if(a==b){
    cout << c << endl;
  }else if(a == c){
    cout << b << endl;
  }else if(b == c){
    cout << a << endl;
  }else{
    cout << 0 << endl;
  }

  return 0;
}
