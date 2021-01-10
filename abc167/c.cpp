#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> understand(m);
  map<float, vector<int>, greater<float>> data;
  int money = 0;
  for (int i = 0; i < n; i++)
  {
    int price;
    vector<int> temp(m + 1);
    cin >> price;
    float sum = 0;
    for (int i = 0; i < m; i++)
    {
      cin >> temp[i];
      sum += temp[i];
    }
    temp[m] = price;
    data[sum / price] = temp;
  }

  for (auto const &entry : data)
  {
    vector<int> now = entry.second;
    for (int i = 0; i < m; i++)
    {
      understand[i] += now[i];
    }
    money += now[m];
    bool flag = true;
    for (int i = 0; i < m; i++)
      if (understand[i] < x)
        flag = false;
    if (flag)
    {
      cout << money << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}