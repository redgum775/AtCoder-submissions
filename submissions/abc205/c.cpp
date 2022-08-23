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
  ll A;
  ll B;
  ll C;
  cin >> A >> B >> C;

  bool a = true;
  bool b = true;

  if(A < 0){
    A *= -1;
    a = false;
  } 
  if(B < 0){
    B *= -1;
    b = false;
  }

  if(!a && !b){ // - -
    if(C % 2 == 0){
      if(A > B){
        cout << ">" << endl;
      }else if(A < B){
        cout << "<" << endl;
      }else if(A == B){
        cout << "=" << endl;
      }
    }else{
      if(A > B){
        cout << "<" << endl;
      }else if(A < B){
        cout << ">" << endl;
      }else if(A == B){
        cout << "=" << endl;
      }
    }
  }else if(a && !b){  // + -
    if(C % 2 == 0){
      if(A > B){
        cout << ">" << endl;
      }else if(A < B){
        cout << "<" << endl;
      }else{
        cout << "=" << endl;
      }
    }else{
      cout << ">" << endl;
    }
  }else if(!a && b){  // - +
    if(C % 2 == 0){
      if(A > B){
        cout << ">" << endl;
      }else if(A < B){
        cout << "<" << endl;
      }else{
        cout << "=" << endl;
      }
    }else{
      cout << "<" << endl;
    }
  }else{  // + +
    if(A > B){
      cout << ">" << endl;
    }else if(A < B){
      cout << "<" << endl;
    }else if( A == B){
      cout << "=" << endl;
    }
  }

  return 0;
}
