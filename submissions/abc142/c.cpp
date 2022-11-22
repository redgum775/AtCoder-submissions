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
vector<pair<int, int>> students;

int main() {
  int N;
  cin >> N;
  int num;
  for(int i = 0; i < N; i++){
    cin >> num;
    students.push_back({num, i+1});
  }

  sort(students.begin(), students.end());

  for(pair<int, int> student: students) cout << student.second << " ";
  cout << endl;

  return 0;
}
