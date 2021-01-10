#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
  int m, n, k;
  cin >> m >> n >> k;
  vector<int> task(k);
  vector<int> people(m + 1);
  people[0] = n;
  for (int i = 0; i < k; i++)
  {
    int a;
    int plus = 0;
    cin >> a;
    if (people[0] > 0)
    {
      people[0]--;
      plus++;
    }
    for (int i = 1; i <= m; i++)
    {
      if (people[i] > 0 && i != a)
      {
        people[i]--;
        plus++;
      }
    }
    people[a] += plus;
  }
  int MAX = 0;
  for (int i = 1; i <= m; i++)
    MAX = max(MAX, people[i]);
  for (int i = 1; i <= m; i++)
  {
    if (people[i] == MAX)
      cout << i << endl;
  }
  return 0;
}