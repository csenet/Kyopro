#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  typedef struct
  {
    vector<int> to;
    int color;
  } Edge;
  int n, m, q;
  cin >> n >> m >> q;
  vector<Edge> G(n + 1);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].to.push_back(b);
    G[b].to.push_back(a);
  }
  for (int i = 1; i <= n; i++)
  {
    int color;
    cin >> color;
    G[i].color = color;
  }
  for (int i = 0; i < q; i++)
  {
    // Query
    int mode;
    cin >> mode;
    if (mode == 1)
    {
      int x;
      cin >> x;
      Edge P = G[x];
      int ccolor = P.color;
      cout << ccolor << endl;
      for (int j = 0; P.to.size() > j; j++)
      {
        G[P.to[j]].color = ccolor;
      }
    }
    else
    {
      int x, y;
      cin >> x >> y;
      Edge point = G[x];
      cout << point.color << endl;
      G[x].color = y;
    }
  }
  return 0;
}