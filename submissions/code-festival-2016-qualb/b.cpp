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
  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  int a = 0, b = 0;
  for(char s : S){
    if(s == 'a'){
      a++;
      cout << (A + B >= a + min(b, B) ? "Yes" : "No") << endl; 
    }
    if(s == 'b'){
      b++;
      cout << (A + B >= a + b && B >= b ? "Yes" : "No") << endl; 
    }
    if(s == 'c') cout << "No" << endl;
  }

  return 0;
}
