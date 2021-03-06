#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a = 1000000, b = 1000000, a_p, b_p;
int main(void)
{
  int n;
  cin >> n;
  typedef std::pair<int, int> pair;
  vector<pair> a;
  vector<pair> b;
  for (int i = 0; i < n; i++)
  {
    int p, q;
    cin >> p >> q;
    a.push_back(pair(p, i));
    b.push_back(pair(q, i));
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  int time = max(a[0].first, b[0].first);
  if (a[0].second == b[0].second)
  {
    int now = a[0].first + b[0].first;
    time = min(min(max(a[1].first, b[0].first), max(a[0].first, b[1].first)), now);
  }
  cout << time << endl;
}