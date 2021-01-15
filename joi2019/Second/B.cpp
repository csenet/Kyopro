#include <bits/stdc++.h>
using namespace std;
int getTime(int);
int getSum(int, int);
int getDigit(int);
int main(void)
{
  int M, R;
  cin >> M >> R;
  int MIN = getTime(R);
  for (int i = R + M; i < M * 4; i += M)
  {
    MIN = min(getTime(i), MIN);
  }
  cout << MIN << endl;
  return 0;
}

int getTime(int n)
{
  int time = 0;
  int cursor = 0;
  for (int i = 0; i < getDigit(n); i++)
  {
    int go = getSum(n, i);
    int dif = go - cursor;
    if (cursor == 0 && go != 0)
    {
      time++;
      cursor = 1;
      dif = abs(go - cursor);
    }
    time += dif / 3 + dif % 3;
    time++;
    cursor = go;
  }
  return time;
}
int getSum(int num, int col)
{
  int dig;

  for (int i = 0; i <= col; i++)
  {
    dig = num % 10;
    num = num / 10;
  }
  return dig;
}
int getDigit(int number)
{
  int digit = 0;

  while (number != 0)
  {
    number = number / 10;
    ++digit;
  }
  return digit;
}