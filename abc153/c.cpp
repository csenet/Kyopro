#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  long n, k;
  cin >> n >> k;
  long ans = 0;
  vector<long> enehp(n);
  for (int i = 0; i < n; i++)
    cin >> enehp[i];
  sort(enehp.rbegin(), enehp.rend());
  if (n <= k)
  {
    cout << 0 << endl;
    return 0;
  }
  for (int i = k; i < n; i++)
  {
    ans += enehp[i];
  }
  cout << ans << endl;
  return 0;
}