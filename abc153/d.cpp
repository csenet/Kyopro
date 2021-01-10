#include <bits/stdc++.h>
using namespace std;

long attack(long h);

int main(void)
{
  long h;
  cin >> h;
  long dig = 1;
  while (h != 1)
  {
    h = h >> 1;
    dig = 2 * dig + 1;
  }
  cout << dig << endl;
  return 0;
}