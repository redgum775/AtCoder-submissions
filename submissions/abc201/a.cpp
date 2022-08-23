//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;

using namespace std;

int main() {
  vector<int> a(3);

  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end(), greater<int>());

  if(a[2] - a[1] == a[1] - a[0]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
