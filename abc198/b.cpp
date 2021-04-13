#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  string input;
  cin >> input;
  int length = 0;
  if (input == "0")
  {
    cout << "Yes" << endl;
    return 0;
  }
  for (int i = input.length() - 1; i >= 0; i--)
  {
    if (input.at(i) != '0')
    {
      break;
    }
    else
    {
      input.erase(i);
    }
  }
  int Length = input.length();
  string a, b;
  if (Length % 2 == 1)
  {
    Length++;
    Length /= 2;
    b = input.substr(Length - 1, Length);
    a = input.substr(0, Length);
  }
  else
  {
    Length /= 2;
    b = input.substr(Length, Length);
    a = input.substr(0, Length);
  }
  reverse(b.begin(), b.end());
  if (a == b)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}