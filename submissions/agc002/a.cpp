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
  int a, b;
  cin >> a >> b;
  
  if(a <= 0 && 0 <= b){
    cout << "Zero" << endl;
  }else if(a < 0 && b < 0){
    if((b - a + 1) % 2 == 0){
      cout << "Positive" << endl;
    }else{
      cout << "Negative" << endl;
    }
  }else{
    cout << "Positive" << endl;
  }

  return 0;
}
