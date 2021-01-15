#include <bits/stdc++.h>
using namespace std;
int getSum(int number);
queue<int> getAns(int number);
int main(void)
{
  int n;
  cin >> n;
  int ans = 0;
  int i = n;
  while (true)
  {
    queue<int> result = getAns(i);
    if (result.size())
      break;
    for (int i = 0; i < result.size(); i++)
    {
      getAns(result.front());
      result.pop();
    }
  }
  cout << ans + 1 << endl;
  return 0;
}
queue<int> getAns(int n)
{
  queue<int> result;
  for (int i = n - 1; i >= 0; i--)
  {
    if (i + getSum(i) == n)
    {
      result.push(i);
    }
  }
  return result;
}
int getSum(int num)
{
  int dig;
  int sum = 0;

  while (num)
  {
    dig = num % 10;
    sum = sum + dig;
    num = num / 10;
  }
  return sum;
}