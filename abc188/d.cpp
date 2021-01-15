#include <bits/stdc++.h>
using namespace std;
template <class T>
inline void container_sort(std::vector<T> &v)
{
  std::sort(v.begin(), v.end());
}
template <class T>
inline void container_sort(std::list<T> &v)
{
  v.sort();
}
template <class T>
void vec_unique(T &v)
{

  container_sort(v);
  v.erase(
      std::unique(
          v.begin(),
          v.end()),
      v.end());
}
int main(void)
{
  long long n, c, length = 0;
  cin >> n >> c;
  long long ans = 0;
  long long data[n][3];
  long long sum[n];
  vector<long long> date;
  for (long long i = 0; i < n; i++)
  {
    cin >> data[i][0] >> data[i][1] >> data[i][2];
    length = max(length, data[i][1]);
    date.push_back(data[i][0]);
    date.push_back(data[i][1]);
  }
  vec_unique(date);
  for (long long i = 0; i < date.size(); i++)
  {
    long long day = date[i];
    long long sum = 0;
    for (long long j = 0; j < n; j++)
    {
      if (day >= data[j][0] && day <= data[j][1])
      {
        //利用する期間内だったら
        sum += data[j][2];
      }
    }
    long long d;
    if (i + 1 < date.size())
    {
      d = date[i + 1] - date[i];
    }
    else
    {
      d = 1;
    }
    ans += min(sum, c) * d;
  }
  cout << ans << endl;
  return 0;
}