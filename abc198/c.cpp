#include <iostream>
using namespace std;
int main(void)
{
  int r;
  int x;
  int y;
  cin >> r >> x >> y;
  int a, b;
  double c, d;
  if (x % r != 0)
  {
    a = x / r + 1;
  }
  else
  {
    a = x / r;
  }
  if (y % r != 0)
  {
    b = y / r + 1;
  }
  else
  {
    b = y / r;
  }
  cout << a << b << endl;
  return 0;
}