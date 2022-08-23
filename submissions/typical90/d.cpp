#include <iostream>
#include <vector>

using namespace std;

int main(){
  //�\�T�C�Y�̎擾
  int H, W;
  cin >> H >> W;

  vector<vector<int>> data(H, vector<int>(W));
  vector<int> tmp_h(W,0);
  vector<int> tmp_v(H,0);

  //�\�̓���
  for(int h = 0; h < H; h++){
    for(int w = 0; w < W; w++){
      cin >> data[h][w];
    }
  }

  //�e�s�C�e��̘a��ۑ�
  for(int h = 0; h < H; h++){
    for(int w = 0; w < W; w++){
      tmp_v[h] += data[h][w];
    }
  }
  
  for(int w = 0; w < W; w++){
    for(int h = 0; h < H; h++){
      tmp_h[w] += data[h][w];
    }
  }

  for(int h = 0; h < H; h++){
    for(int w = 0; w < W; w++){
      cout << tmp_h[w] + tmp_v[h] - data[h][w] << " ";
    }
    cout << endl;
  }
}
