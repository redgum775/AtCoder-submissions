//#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int X[105];

int main() {
  int N;
  cin >> N;

  int tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    X[tmp]++;
  }

  int energy;
  int min_energy = 2147483647;

  for(int p = 1; p <= 100; p++){
    energy = 0;
    for(int i = 1; i <= 100; i++){
      energy += X[i] * pow(i - p, 2);
    }
    min_energy = min(energy, min_energy);
  }

  cout << min_energy << endl;

  return 0;
}
