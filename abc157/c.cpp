#include <bits/stdc++.h>
using namespace std;
unsigned GetDigit(unsigned num)
{
  unsigned digit = 0;
  while (num != 0)
  {
    num /= 10;
    digit++;
  }
  return digit;
}
int main(void)
{
  int n, m;
  cin >> n >> m;
  map<int, int> data;
  for (int i = 0; i < m; i++)
  {
    int s, c;
    cin >> s >> c;
    if ((data[s] == 0 || data[s] == c))
    {
      data[s] = c;
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }
  int ans = 0;
  for (auto itr = data.begin(); itr != data.end(); ++itr)
  {
    ans += pow(10, (n - itr->first)) * itr->second;
  }
  int length = GetDigit(ans);
  if (ans == 0)
    length = 1;
  if (length == n && ans >= 0)
    cout
        << ans << endl;
  else
    cout << -1 << endl;

  return 0;
}