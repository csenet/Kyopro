#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n, m;
  cin >> n >> m;
  int days = 0;
  for (int i = 0; i < m; i++)
  {
    int temp;
    cin >> temp;
    days += temp;
  }
  if (n - days < 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << n - days << endl;
  }
}