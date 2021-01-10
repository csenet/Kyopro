#include <bits/stdc++.h>
using namespace std;

string s;

bool isOK(string data)
{
  string temp = data;
  reverse(data.begin(), data.end());
  if (temp == data)
    return true;
  return false;
}

int main(void)
{
  cin >> s;
  int n = s.length();
  string b, c;
  b = s.substr(0, (n - 1) / 2);
  c = s.substr((n + 3) / 2 - 1, n);
  if (isOK(s) && isOK(b) && isOK(c))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}