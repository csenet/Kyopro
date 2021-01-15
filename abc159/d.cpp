#include <bits/stdc++.h>
using namespace std;

int N;
#define int long long

signed main()
{
  cin >> N;
  map<int, int> input;

  vector<int> ball(N);
  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    input[num]++;
    ball[i] = num;
  }
  long long ans = 0;
  for (auto i = input.begin(); i != input.end(); ++i)
  {
    if (i->second > 1)
    {
      ans += (i->second) * (i->second - 1) / 2;
    }
  }
  for (int k = 0; k < N; k++)
  {
    int num = input[ball[k]];
    if (ans - (num - 1) > 0)
    {
      cout << ans - (num - 1) << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
}