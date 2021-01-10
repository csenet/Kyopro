#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int n;
  cin >> n;
  vector<int> data(n);
  for (int i = 0; i < n - 1; i++)
  {
    int temp;
    cin >> temp;
    data[temp - 1]++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << data[i] << endl;
  }
}