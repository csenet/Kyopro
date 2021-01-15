#include <bits/stdc++.h>
using namespace std;
void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f)
{
  if (rest == 0)
  {
    f(indexes);
  }
  else
  {
    if (s < 0)
      return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f)
{
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}
bool check(int a, int b)
{
}
int height[200000];
int ans = 0;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> height[i];
  foreach_comb(n, 2, [](int *indexes) {
    if (height[indexes[0]] + height[indexes[1]] == abs(indexes[0] + 1 - indexes[1] - 1))
    {
      ans++;
    }
  });
  cout << ans << endl;
}