#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n;
  cin >> n;
  n = (int)pow(2, n);
  vector<int> test(n);
  vector<int> temp(n);
  for (int i = 0; i < n; i++)
    cin >> test[i];
  temp = test;
  while (test.size() != 2)
  {
    for (int i = 0; i < test.size(); i++)
    {
      if (test[i] > test[i + 1])
      {
        test.erase(test.begin() + i + 1);
      }
      else
      {
        test.erase(test.begin() + i);
      }
    }
  }
  if (test[0] > test[1])
    test[0] = test[1];
  for (int i = 0; i < n; i++)
  {
    if (test[0] == temp[i])
      cout << i + 1 << endl;
  }
  return 0;
}