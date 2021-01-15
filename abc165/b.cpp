#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  double x;
  cin >> x;
  int ans = 1;
  long long money = 100;
  while (money < x)
  {
    money *= 1.01;
    ans++;
    cout << money << endl;
  }
  cout << ans - 1 << endl;
  return 0;
}