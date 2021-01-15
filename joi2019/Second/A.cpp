#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n;
  cin >> n;
  int BEFO[n][n];
  int NEW[n][n];
  int i, j;
  for (i = 0; i < n; i++)
  {
    string input;
    cin >> input;
    for (j = 0; j < n; j++)
    {
      BEFO[i][j] = input.at(j) - 0x40;
    }
  }
  for (i = 0; i < n; i++)
  {
    string input;
    cin >> input;
    for (j = 0; j < n; j++)
    {
      NEW[i][j] = input.at(j) - 0x40;
    }
  }
  int ans = 0;
  /*処理*/
  //3回回して一番小さいやつ
  int minTime = 0;
  int minDif = n * n + 1;
  for (int time = 0; time < 4; time++)
  {
    int TEMP[n][n];
    memcpy(TEMP, BEFO, sizeof(BEFO));
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        BEFO[i][j] = TEMP[n - j - 1][i];
      }
    }
    int dif = 0;
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (BEFO[i][j] != NEW[i][j])
        {
          dif++;
        }
      }
    }
    if (dif <= minDif)
    {
      minDif = dif;
      minTime = time;
    }
  }
  switch (minTime)
  {
  case 3:
    break;
  case 0:
    ans++;
    break;
  case 1:
    ans += 2;
    break;
  case 2:
    ans++;
    break;
  }
  for (int time = 0; time <= minTime; time++)
  {
    int TEMP[n][n];
    memcpy(TEMP, BEFO, sizeof(BEFO));
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        BEFO[i][j] = TEMP[n - j - 1][i];
      }
    }
  }
  int dif = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (BEFO[i][j] != NEW[i][j])
      {
        dif++;
      }
    }
  }
  cout << ans + dif << endl;
  return 0;
}