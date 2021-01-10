#include <bits/stdc++.h>
using namespace std;

string getStr(int k);

std::string replaceOtherStr(std::string &replacedStr, std::string from, std::string to)
{
  const unsigned int pos = replacedStr.find(from);
  const int len = from.length();

  if (pos == std::string::npos || from.empty())
  {
    return replacedStr;
  }

  return replacedStr.replace(pos, len, to);
}

int main(void)
{
  int k, s, t;
  cin >> k >> s >> t;
  string ans = getStr(k);
  cout << ans.substr(s - 1, t - s + 1) << endl;
  return 0;
}

string getStr(int k)
{
  string output;
  for (int i = 1; i <= k; i++)
  {
    if (i == 1)
      output = "ABC";
    else
      output = ("A" + output);
  }
  string out2 = output;
  replaceOtherStr(output, "A", "programmer");
  return output+"B"+
}
