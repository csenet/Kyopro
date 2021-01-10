#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  string T;
  cin >> T;
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
    case '?':
      bool isOK = false;
      if (i + 1 < T.length())
      {
        if (T.at(i + 1) == 'P')
        {
          isOK = true;
        }
      }
      if (flag || isOK || i == 0)
      {
        T.at(i) = 'D';
        flag = false;
        k += 2;
      }
      else
      {
        T.at(i) = 'P';
        flag = true;
      }
      break;
    }
  }
  cout << T << endl;
  return 0;
}