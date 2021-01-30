#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
  int n, x;
  long all = 0;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    long v, p;
    cin >> v >> p;
    all += v * p;
    if (all > x * 100)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
