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

  int Teika = 206;

  N *= 1.08;

  if(Teika < N){
    cout << ":(" << endl;
  }else if(Teika > N){
    cout << "Yay!" << endl;
  }else if(Teika == N){
    cout << "so-so" << endl;
  }

  return 0;
}
