#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n, q;
  cin >> n >> q;
  vector<vector<int>> data(n + 1);
  vector<int> position(n + 1);
  for (int i = 1; i <= n; i++)
  {
    data[i].push_back(i);
    position[i] = i;
  }
  for (int j = 0; j < q; j++)
  {
    int f, t, x;
    cin >> f >> t >> x;
    vector<int> temp;
    bool flag = false;
    for (int i = 0; i < data[f].size(); i++)
    {
      if (data[f][i] == x)
      {
        flag = true;
      }
      if (flag)
      {
        temp.push_back(data[f][i]);
      }
    }
    for (int d = 0; d < temp.size(); d++)
    {
      data[f].pop_back();
    }
    int last = data[t].size();
    for (int k = 0; k < temp.size(); k++)
    {
      position[temp[k]] = t;
      data[t].push_back(temp[k]);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << position[i] << endl;
  }
}