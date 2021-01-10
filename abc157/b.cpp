#include <bits/stdc++.h>
using namespace std;
int vector_finder(std::vector<int> vec, int number)
{
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance(vec.begin(), itr);
  if (index != vec.size())
  { // 発見できたとき
    return 1;
  }
  else
  { // 発見できなかったとき
    return 0;
  }
}
int main(void)
{
  int sheet[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> sheet[i][j];
    }
  }
  int n;
  cin >> n;
  vector<int> bingo(n);
  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    bingo[i] = temp;
  }
  //横
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (!vector_finder(bingo, sheet[i][j]))
        flag = false;
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
    flag = true;
  }

  //縦
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (!vector_finder(bingo, sheet[j][i]))
        flag = false;
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
    flag = true;
  }

  //斜め
  for (int i = 0; i < 3; i++)
  {
    if (!vector_finder(bingo, sheet[i][i]))
      flag = false;
  }
  if (flag)
  {
    cout << "Yes" << endl;
    return 0;
  }
  flag = true;
  for (int i = 0; i < 3; i++)
  {
    if (!vector_finder(bingo, sheet[2 - i][i]))
      flag = false;
  }
  if (flag)
  {
    cout << "Yes" << endl;
    return 0;
  }
  flag = true;
  cout << "No" << endl;
  return 0;
}