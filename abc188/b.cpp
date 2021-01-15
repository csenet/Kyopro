#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n;
  long long sum = 0;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 0; i < n; i++)
  {
    sum += a[i] * b[i];
  }
  if (!sum)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}