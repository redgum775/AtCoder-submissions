#include <iostream>
#include <vector>

using namespace std;

int split_counter(vector<int> num){
  int count = 0;
  while(1){
    for(size_t i = 0; i < num.size(); i++){
      if(num[i] % 2 != 0){
        return count;
      }
        num[i] /= 2;
    }
    count++;
  }
}

int main(){
  int N;
  cin >> N;

  vector<int> num(N,0);

  for(int i = 0; i < N; i++)  cin >> num[i];

  cout << split_counter(num) << endl;
  
  return 0;
}
