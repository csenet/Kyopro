#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  string numData[10] = {
      ".###.#.#.#.#.#.#.###",
      "..#..##...#...#..###",
      ".###...#.###.#...###",
      ".###...#.###...#.###",
      ".#.#.#.#.###...#...#",
      ".###.#...###...#.###",
      ".###.#...###.#.#.###",
      ".###...#...#...#...#",
      ".###.#.#.###.#.#.###",
      ".###.#.#.###...#.###",
  };
  int n;
  cin >> n;
  vector<string> data(n);
  for (int j = 0; j < 5; j++)
  {
    for (int i = 0; i < 4 * n + 1; i++)
    {
      char now;
      cin >> now;
      if (i != 4 * n)
      {
        data[i / 4] += now;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (data[i] == numData[j])
      {
        cout << j;
      }
    }
  }
  cout << endl;
  return 0;
}