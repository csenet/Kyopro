#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int H, W, N;
  cin >> H >> W >> N;
  int output[H][W];
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      output[i][j] = 0;
  int task[N][3];
  for (int i = 0; i < N; i++)
  {
    int h, w, x;
    cin >> h >> w >> x;
    task[i][0] = h;
    task[i][1] = w;
    task[i][2] = x;
  }
  for (int i = 0; i < N; i++)
  {
    int h, w, x;
    h = task[i][0];
    w = task[i][1];
    x = task[i][2];
    int col = H - 1;
    for (int i = 0; i < H; i++)
    {
      bool flag = false;
      for (int j = x; j < x + w && x + w <= W; j++)
      {
        if (output[i][j])
          flag = true;
      }
      if (flag)
      {
        col = i - 1;
        break;
      }
    }
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        output[col - i][j + x] = 1;
      }
    }
  }
  //出力
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (output[i][j])
        cout << '#';
      else
        cout << '.';
    }
    cout << endl;
  }
  return 0;
}