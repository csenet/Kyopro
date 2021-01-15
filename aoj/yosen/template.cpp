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
signed main()
{
    SPEED;
    // ここに変数などを書く
    int n = 0;
    int input;
    int count = 0;
    while (scanf("%d", &n) > 0)
    {
        if (n == 0)
            return 0;
        int data[n];
        rep(i, n)
        {
            scanf("%d", &data[i]);
        }
        buble_sort(data, n);
    }
    return 0;
}

void buble_sort(int *data, int n)
{
    int times = 0;
    bool flag = false;
    while (!flag)
    {
        flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                flag = false;
                int temp;
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                times++;
            }
        }
    }
    cout << times << endl;
}