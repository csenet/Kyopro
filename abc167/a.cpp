#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  string S, T;
  cin >> S >> T;
  int length = T.length();
  if (S == T.substr(0, length - 1))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}