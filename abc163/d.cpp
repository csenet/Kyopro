#include <bits/stdc++.h>
using namespace std;
#define int long long
int conbination(int a, int b)
{
  int sum = 0;
  for (int i = a; i >= a - b; i--)
  {
    sum += i;
  }
  if (sum == 0)
    sum++;
  return sum;
}
signed main(void)
{
  long long n, k;
  cin >> n >> k;
  int temp = 0;
  int history = 0;
  if (k - n == 1)
  {
    cout << 1 << endl;
    return 0;
  }
  for (int i = 1; i <= n - k; i++)
  {
    temp += conbination(n + 1, i) % (1000000000 + 7);
    cout << temp << endl;
  }
  cout << pow(2.0, (double)n + 1) - (temp + 1) << endl;
}