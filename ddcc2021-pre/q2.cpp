#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
  for (int n = 0; n < 5; n++)
  {
    //　入力
    string input;
    cin >> input;
    bool flag = false;
    bool mode = false;
    int pos = 0;
    vector<int> ball;
    vector<int> hole;
    for (int i = 0; i < input.length(); i++)
    {
      if (input.at(i) == '{' || input.at(i) == '}')
        continue;
      if (input.at(i) == '0' && input.at(i - 1) == ',')
      {
        mode = true;
        i++;
        continue;
      }
      if (input.at(i) == ',' && flag)
      {
        if (!mode)
        {
          ball.push_back(atoi(input.substr(pos, i - pos + 1).c_str()));
        }
        else
        {
          hole.push_back(atoi(input.substr(pos, i - pos + 1).c_str()));
        }
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
    int a = ball[0];
    for (int i = 0; i < ball.size(); i++)
    {
      ball[i] -= a - 1;
    }
    for (int i = 0; i < 1000; i++)
    {
      int count = 0;
      // 処理
      for (int i = 0; i < ball.size(); i++)
      {

        if (vector_finder(hole, ball[i]))
        {
          count++;
        }
      }
      ans = max(ans, count);
      for (int i = 0; i < ball.size(); i++)
      {
        ball[i]++;
      }
    }

    if (n == 4)
    {
      cout << ans << endl;
    }
    else
    {
      cout << ans << ',';
    }
  }
}