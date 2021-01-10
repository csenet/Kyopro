#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  scanf("%d %d", &n, &m);
  vector<int> data(m);
  vector<int> output(m);
  for (int i = 0; i < m; i++)
    output[i] = -1;
  for (int i = 0; i < m; i++)
    cin >> data[i];
  for (int i = 1; i <= n; i++)
  {
    int max = 0;
    for (int j = 0; j < m; j++)
    {
      if (output[j] == -1 && data[j] > max)
      {
        max = data[j];
        output[j] = i;
      }
    }
  }
  for (int i = 0; i < m; i++)
  {
    cout << output[i] << endl;
  }
}