#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
  string input;
  cin >> input;
  for (int i = 1; i < 3; i++)
  {
    if (input.at(i) != input.at(0))
    {
      cout << "Lost" << endl;
      return 0;
    }
  }
  cout << "Won" << endl;
}
