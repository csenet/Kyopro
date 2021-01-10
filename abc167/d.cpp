#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
  int n, k;
  cin >> n >> k;
  vector<int> Go(n);
  for (int i = 0; i < n; i++)
    cin >> Go[i];
  int mawaru = 0;
  int prace = 1;
  do
  {
    prace = Go[prace - 1];
    mawaru++;
    cout << prace << endl;
  } while (prace != 1);
  cout << mawaru << endl;
  return 0;
}