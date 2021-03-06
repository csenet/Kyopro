#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  for (int n = 0; n < 3; n++)
  {
    string input;
    cin >> input;
    bool flag = false;
    int pos = 0;
    int data[20];
    int index = 0;
    for (int i = 0; i < input.length(); i++)
    {
      if (input.at(i) == '{' || input.at(i) == '}')
        continue;
      if (input.at(i) == ',')
      {
        data[index] = atoi(input.substr(pos, i - pos + 1).c_str());
        index++;
        flag = false;
      }
      else
      {
        if (!flag)
        {
          flag = true;
          pos = i;
        }
      }
    }
    int ans = 0;
    for (int i = 0; i < 20; i += 2)
    {
      if (data[i] + data[i + 1] == 10 && data[i] != 10)
      {
        ans++;
      }
    }
    if (n == 2)
    {
      cout << ans << endl;
    }
    else
    {
      cout << ans << ',';
    }
  }
}