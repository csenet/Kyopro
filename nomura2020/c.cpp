#include <bits/stdc++.h>
using namespace std;
std::string replaceStringAll(std::string str,
                             const std::string &replace,
                             const std::string &with)
{
  if (!replace.empty())
  {
    std::size_t pos = 0;
    while ((pos = str.find(replace, pos)) != std::string::npos)
    {
      str.replace(pos, replace.length(), with);
      pos += with.length();
    }
  }
  return str;
}
int count(string T)
{
  int k = 0;
  for (int i = 0; i < T.length(); i++)
  {
    char Now = T.at(i);
    static bool flag = false;
    switch (Now)
    {
    case 'P':
      flag = true;
      break;
    case 'D':
      k++;
      if (flag)
      {
        k++;
        flag = false;
      }
      break;
    }
  }
  return k;
}
int main(void)
{
  string T;
  cin >> T;
  T = replaceStringAll(T, "?", "D");
  cout << T << endl;
  return 0;
}