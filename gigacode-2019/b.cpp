#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
  int n, x, y, z, ans = 0;
  cin >> n >> x >> y >> z;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    if ((a >= x && b >= y) && (a + b >= z))
      ans++;
  }
  cout << ans << endl;
  return 0;
}