#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int h, a;
  cin >> h >> a;
  int ans = 0;
  ans = h / a;
  if (h % a != 0)
    ans++;
  cout << ans << endl;
  return 0;
}