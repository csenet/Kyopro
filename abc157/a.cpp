#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n;
  cin >> n;
  if (n % 2 == 1)
    n++;
  cout << n / 2 << endl;
  return 0;
}