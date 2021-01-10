#include <bits/stdc++.h>
using namespace std;
#define INF 100000000
int main(void)
{
  int h, w;
  cin >> h >> w;
  vector<vector<int>> map(h + 10, vector<int>(w + 10));
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char input;
      cin >> input;
      if (input == '#')
        map[i][j] = 1;
      else
        map[i][j] = 0;
    }
  }
  int x = 0, y = 0;
  int ans = 0;
  while (x != w - 1 || y != h - 1)
  {
    //cout << x << ':' << y << endl;
    ans += map[y][x];
    if (!(x + 1 < w))
    {
      y++;
      //cout << "Wオーバ " << endl;
    }
    else if (!(y + 1 < h))
    {
      x++;
      //cout << "Hオーバ " << endl;
    }
    else if (map[y][x + 1] < map[y + 1][x])
    {
      //cout << map[y][x + 1] << ':' << map[y + 1][x] << endl;
      x++;
      //cout << "X " << endl;
    }
    else if (map[y][x + 1] > map[y + 1][x])
    {
      //cout << map[y][x + 1] << ':' << map[y + 1][x] << endl;
      y++;
    }
    else if (!(x + 2 < w))
    {
      y++;
      //cout << "Wオーバ " << endl;
    }
    else if (!(y + 2 < h))
    {
      x++;
      //cout << "Hオーバ " << endl;
    }
    else if (map[y][x + 2] < map[y + 2][x])
    {
      x++;
      //cout << "X " << endl;
    }
    else
    {
      y++;
      //cout << "Y " << endl;
    }
  }
  ans += map[x][y];
  cout << ans << endl;
  return 0;
}
