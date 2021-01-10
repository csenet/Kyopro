#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int N, M;
  cin >> N >> M;
  vector<int> height(N);
  vector<bool> isPoint(N);
  for (int i = 0; i < N; i++)
  {
    cin >> height[i];
    
  }
  int maxHeight = *max_element(height.begin(), height.end());
  int ans = 0;
  if (maxHeight >= M)
    ans++;
  for (int i = 0; i < N; i++)
  {
    int theHeight = height[i];
    if (theHeight != maxHeight)
    {
      int maxNeighborHeight = 0;
      if (i == 0)
      {
        maxNeighborHeight = height[i + 1];
      }
      else if (i == N - 1)
      {
        maxNeighborHeight = height[i - 1];
      }
      else
      {
        maxNeighborHeight = max(height[i - 1], height[i + 1]);
      }
      cout << theHeight - maxNeighborHeight << endl;
      if (theHeight - maxNeighborHeight >= M)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}