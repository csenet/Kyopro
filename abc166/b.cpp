#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int N, K;
  cin >> N >> K;
  vector<bool> isHave(N + 1);
  for (int i = 0; i < K; i++)
  {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int input;
      cin >> input;
      isHave[input] = true;
    }
  }
  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    if (!isHave[i])
      ans++;
  }
  cout << ans << endl;
  return 0;
}