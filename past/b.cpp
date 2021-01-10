#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> score(m + 1);
  for (int i = 0; i <= m; i++)
    score[i] = n;
  vector<vector<int>> solvedQuestion(n + 1);
  for (int i = 0; i < q; i++)
  {
    int mode;
    cin >> mode;
    if (mode == 1)
    {
      // Output Score
      int n;
      cin >> n;
      vector<int> solved = solvedQuestion[n];
      int scores = 0;
      for (int j = 0; j < solved.size(); j++)
      {
        scores += score[solved[j]];
      }
      cout << scores << endl;
    }
    else
    {
      // Update Score
      int n, m;
      cin >> n >> m;
      solvedQuestion[n].push_back(m);
      score[m]--;
    }
  }
  return 0;
}