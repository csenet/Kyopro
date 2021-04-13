#include <iostream>
#include <vector>
using namespace std;
#define GET_NBIT(a, n) (((a) >> (n)) & 1)
template <class T>
inline std::string format_binary(T x) {
  char b[sizeof(T) * 8 + 1] = {0};

  for (size_t z = 0; z < sizeof(T) * 8; z++)
    b[sizeof(T) * 8 - 1 - z] = ((x >> z) & 0x1) ? '1' : '0';

  return std::string(b);
}
int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  int ans = 0;
  for (int i = 0; i < n; i++) cin >> data[i];
  for (int i = 0; i <= 32; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += GET_NBIT(data[j], i);
    }
    if (sum == 1) {
      ans += (1 << i);
    }
  }
  cout << ans << endl;
}