#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  int n;
  cin >> n;
  int data[n];
  for (int i = 0; i < n; i++)
    cin >> data[i];
  long sum = 0;
  long ans = 0;
  for (int i = 0; i < n; i++)
  {
    sum += data[i] * data[i];
  }
  ans += sum * (n - 1);
  sum = 0;
  for (int i = 2; i <= n; i++)
  {
    int temp = 0;
    for (int j = 1; j <= i - 1; j++)
    {
      temp += data[j - 1];
    }
    sum += data[i - 1] * temp;
  }
  ans -= 2 * sum;
  cout << ans << endl;
}