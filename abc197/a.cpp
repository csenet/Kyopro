#include <iostream>
#include <string>
using namespace std;
int main(void) {
  string input;
  cin >> input;
  char temp;
  temp = input.at(0);
  input.at(0) = input.at(1);
  input.at(1) = input.at(2);
  input.at(2) = temp;
  cout << input << endl;
}
