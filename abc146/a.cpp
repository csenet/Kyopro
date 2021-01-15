#include <iostream>
using namespace std;
int main(void)
{
  string input;
  cin >> input;
  if (input == "SUN")
  {
    cout << 7 << endl;
  }
  else if (input == "MON")
  {
    cout << 6 << endl;
  }
  else if (input == "TUE")
  {
    cout << 5 << endl;
  }
  else if (input == "WED")
  {
    cout << 4 << endl;
  }
  else if (input == "THU")
  {
    cout << 3 << endl;
  }
  else if (input == "FRI")
  {
    cout << 2 << endl;
  }
  else if (input == "SAT")
  {
    cout << 1 << endl;
  }
  return 0;
}