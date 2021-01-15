#include <bits/stdc++.h>
using namespace std;

//Input
int n;
int a[10010];

//DP
int dp[10010];

int main(void)
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  dp[0] = 0;
  for (int i = 0; i < n; ++i)
  {
    dp[i + 1] = max(dp[i], dp[i] + a[i]);
  }
  cout << dp[n] << endl;
  return 0;
}