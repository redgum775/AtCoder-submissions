//#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

bool Int[105];

bool is_integer( double x ){
  return floor(x)==x;
}

int main() {
  double A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  if(is_integer(A)) Int[(int)A] = true;
  if(is_integer(B)) Int[(int)B] = true;
  if(is_integer(C)) Int[(int)C] = true;
  if(is_integer(D)) Int[(int)D] = true;
  if(is_integer(E)) Int[(int)E] = true;

  int count = 0;
  for(bool b : Int){
    if(b) count++;
  }


//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚Ìw’è

  cout << count << endl;

  return 0;
}
