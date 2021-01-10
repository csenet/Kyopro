#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  long long n;
  cin >> n;
  long long ans = 1;
  bool flag = false;
  long long i = 0;
  while (i < n)
  {
    string input;
    cin >> input;
    if (input.length() <= 18)
    {
      long long temp = stoi(input.c_str());
      cout << temp << endl;
      if (!flag)
        ans *= temp;
      else if (temp == 0)
        ans = 0;
      if (ans > 1000000000000000000)
      {
        flag = true;
      }
    }
    else
    {
      flag = true;
    }
    i++;
  }

  if (flag && ans != 0)
    cout << -1 << endl;
  else
    cout << ans << endl;

  return 0;
}