#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int a, r, n;
  cin >> a >> r >> n;
  long long ans = a;
  for (int i = 1; i < n; i++)
  {
    ans *= r;
    if (ans > 1000000000)
    {
      cout << "large" << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}