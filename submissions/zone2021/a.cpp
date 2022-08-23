#include <iostream>
#include <string>
using namespace std;

int main(){
  string S;
  cin >> S;

  string s = "ZONe"; 
	int count = 0;
	for(size_t i = 0; i <= S.size() - 4; i++){
		if(S.substr(i,4)=="ZONe")count++;
	}

  cout << count << endl;

  return 0;
}
