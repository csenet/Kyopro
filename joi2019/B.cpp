#pragma GCC optimize "-O3"
#pragma GCC target("avx")
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for (int i = 0; i < n; ++i)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pi pair<int, int>
#define vp vector<pair<int, int>>
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a, 0, sizeof(a))
#define inf (1ll << 60)
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())
#define SPEED                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout << fixed << setprecision(12)
#define erase(i) erase(i, 1)
signed gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
signed lcm(int a, int b) { return a * b / gcd(a, b); }
template <typename T>
void remove(std::vector<T> &vector, unsigned int index) { vector.erase(vector.begin() + index); }
//priority_queue<int, vi, greater<int> > que;//昇順

using namespace std;

const int mod = 1e9 + 7;

void buble_sort(int *data, int n);

// 入力は絶対にscanf()を使うこと
// 出力はどっちでもOK
int main(){
  SPEED;
  int n;
  cin >> n;
  string input;
  cin >> input;
  int count = 0;
  for(int i=0;i<n;i++){
    int now = input.at(i);
    if(now=='a'||now=='i'||now=='u'||now=='e'||now=='o'){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
