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

template<class T>
void combination(const vector<T>& seed, int target_size, bool (*callback)(const vector<T>&)) {
    vector<int> indices(target_size);
    const int seed_size = seed.size();
    int start_index = 0;
    int size = 0;

    while (size >= 0) {
        for (int i = start_index; i < seed_size; ++i) {
            indices[size++] = i;
            if (size == target_size) {
                vector<T> comb(target_size);
                for (int x = 0; x < target_size; ++x) {
                    comb[x] = seed[indices[x]];
                }
                if (callback(comb)) return;
                break;
            }
        }
        --size;
        if (size < 0) break;
        start_index = indices[size] + 1;
    }
}

///////////////// How to use

bool my_callback(const vector<int>& comb) {
    int n = comb.size();
    for (int i=0; i<n; ++i)
        cout << comb[i] << " ";
    cout << endl;
    return false;
}

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> v;
  for(int i = 1; i <= M; i++){
    v.push_back(i);
  }

  combination(v, N, my_callback);

  return 0;
}
