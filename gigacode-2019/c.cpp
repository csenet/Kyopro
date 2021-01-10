#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(void)
{
  long d, ans = 2000000001, sumMoney = 0;
  cin >> d;
  vector<long> prices(d);
  vector<long> money(d);
  for (int i = 0; i < d; i++)
    cin >> money[i];
  for (int i = 0; i < d; i++)
    cin >> prices[i];
  for (int i = 0; i < d; i++)
  {
    sumMoney += money[i];
    if (sumMoney >= prices[i])
    {
      ans = min(ans, prices[i]);
    }
  }
  if (ans == 2000000001)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}