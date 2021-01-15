#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int x;
  cin >> x;
  int a = 0, b = 0;
  for (a = -1000; a <= 1000; a++)
  {
    for (b = -1000; b <= 1000; b++)
    {
      if (pow(a, 5.0) - pow(b, 5.0) == x)
      {
        cout << a << " " << b << endl;
        return 0;
      }
    }
  }
  return 0;
}