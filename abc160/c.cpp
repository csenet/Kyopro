#include <bits/stdc++.h>
using namespace std;
#define INF 100000000
int main(void)
{
  int k, n;
  cin >> k >> n;
  vector<int> dis(n);
  for (int i = 0; i < n; i++)
  {
    int temp = 0;
    cin >> temp;
    dis[i] = temp;
  }
  int MIN = *std::min_element(dis.begin(), dis.end());
  int MAX = *std::max_element(dis.begin(), dis.end());
  int a = MAX - MIN;
  for (int i = 0; i < n; i++)
  {
    if (dis[i] > k / 2)
      dis[i] = -(k - dis[i]);
  }
  MIN = *std::min_element(dis.begin(), dis.end());
  MAX = *std::max_element(dis.begin(), dis.end());
  int b = MAX - MIN;
  cout << min(a, b) << endl;
  return 0;
}