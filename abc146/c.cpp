#include <bits/stdc++.h>
using namespace std;
double GetDigit(unsigned num)
{
  double digit = 0;
  while (num != 0)
  {
    num /= 10;
    digit++;
  }
  return digit;
}
int main(void)
{
  double a, b, x, price = 0, n;
  cin >> a >> b >> x;
  n = x / a;
  price = a * n + b * GetDigit(n);
  for (n = x / a; price > x && n <= 10e9; n--)
  {
    price = a * n + b * GetDigit(n);
  }
  n = (long)n;
  if (n != 0)
  {
    n++;
  }
  if (n >= 1000000000)
    n = 1000000000;
  cout << (long)n << endl;
  return 0;
}