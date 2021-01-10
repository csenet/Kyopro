#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  long double a, b, c;
  cin >> a >> b >> c;
  if (a + b + 2 * sqrt(a * b) < c)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
  return 0;
}