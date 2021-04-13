#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int h, w;
  int x, y;
  cin >> h >> w >> y >> x;
  int data[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char input;
      cin >> input;
      if (input == '#')
        data[i][j] = 1;
      else
        data[i][j] = 0;
    }
  }
  int ans = 0;
  for (int i = x; i < w; i++) {
    // 右
    if (data[y - 1][i] == 0) ans++;
    if (data[y - 1][i] == 1) break;
  }
  for (int i = x - 2; i >= 0; i--) {
    // 左
    if (data[y - 1][i] == 0) ans++;
    if (data[y - 1][i] == 1) break;
  }
  for (int i = y - 2; i >= 0; i--) {
    // 上
    if (data[i][x - 1] == 0) ans++;
    if (data[i][x - 1] == 1) break;
  }
  for (int i = y; i < h; i++) {
    if (data[i][x - 1] == 0) ans++;
    if (data[i][x - 1] == 1) break;
  }
  cout << ans + 1 << endl;
}
