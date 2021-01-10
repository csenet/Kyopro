#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int x;
  cin >> x;
  int ans = 0;
  ans += (x / 500) * 1000;
  x -= (x / 500) * 500;
  ans += (x / 5) * 5;
  cout << ans << endl;
  return 0;
}