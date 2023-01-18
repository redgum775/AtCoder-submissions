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

int A[200005];

int main() {
  int N;
  cin >> N;

  int max = 0;
  int second = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(max < A[i]){
      second = max;
      max = A[i];
    }else if(second < A[i]){
      second = A[i];
    }
  }

  for(int i = 0; i < N; i++){
    cout << (A[i] == max ? second : max) << endl;
  }

  return 0;
}
