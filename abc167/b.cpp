#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = 0;
  if (a > 0)
  {
    if (a >= k)
    {
      ans += k;
      k = 0;
    }
    else
    {
      ans += a;
      k -= a;
    }
  }
  if (b > 0 && k > 0)
  {
    if (b >= k)
    {
      k = 0;
    }
    else
    {
      k -= b;
    }
  }
  if (c > 0 && k > 0)
  {
    if (c >= k)
    {
      ans -= k;
    }
    else
    {
      ans -= c;
    }
  }

  cout << ans << endl;
  return 0;
}