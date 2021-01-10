#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int N, M;
  cin >> N >> M;
  vector<int> height(N, 0);
  vector<bool> isGood(N, true);
  vector<bool> bend(N, false);
  for (int i = 0; i < N; i++)
    cin >> height[i];
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    if (height[a - 1] > height[b - 1])
    {
      isGood[b - 1] = false;
    }
    if (height[b - 1] > height[a - 1])
    {
      isGood[a - 1] = false;
    }
    if (height[b - 1] == height[a - 1])
    {
      bend[a - 1] = true;
      bend[b - 1] = true;
    }
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (isGood[i] && !bend[i])
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}