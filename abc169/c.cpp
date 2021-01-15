#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  double a;
  cin >> a;
  double b;
  cin >> b;
  double integral_part = 0;
  modf(a * b, &integral_part);
  cout << (long long)integral_part << endl;
  return 0;
}