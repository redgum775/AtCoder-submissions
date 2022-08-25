//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

map<char, int> atcoder;
int swap_count;

void bubbleSort(int array[], int array_size) {
    int i, j, k;

    for (i = 0; i < (array_size - 1); i++) {
        for (j = (array_size - 1); j > i; j--) {
            if (array[j] < array[j - 1]) {
                k = array[j];
                array[j] = array[j - 1];
                array[j - 1] = k;
                swap_count++;
            }
        }
    }
}


int main() {
  string S;
  cin >> S;
  
  atcoder['a'] = 1;
  atcoder['t'] = 2;
  atcoder['c'] = 3;
  atcoder['o'] = 4;
  atcoder['d'] = 5;
  atcoder['e'] = 6;
  atcoder['r'] = 7;
  
  int num[7];
  for(int i = 0; i < 7; i++){
    num[i] = atcoder[S[i]];
  }

  bubbleSort(num, 7);

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << swap_count << endl;

  return 0;
}
