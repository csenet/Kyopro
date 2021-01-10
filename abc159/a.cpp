#include <bits/stdc++.h>
using namespace std;

int n, m;

int main(void)
{
  cin >> n >> m;
  cout << n * (n - 1) / 2 + m * (m - 1) / 2 << endl;
  return 0;
}