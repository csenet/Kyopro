#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int h, n, sum = 0, input = 0;
  cin >> h >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> input;
    sum += input;
  }
  if (sum >= h)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}