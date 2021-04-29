#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define MOD 1000000007
#define INF INT32_MAX / 2
#define PI 3.14159265358979323

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
T GCD(T a, T b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
template <class T>
inline T LCM(T a, T b)
{
    return (a * b) / GCD(a, b);
}

using namespace std;
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    string s;
    int q;
    cin >> n >> s >> q;
    vector<int> queryt(q);
    vector<int> querya(q);
    vector<int> queryb(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queryt[i] >> querya[i] >> queryb[i];
    }
    for (int i = 0; i < q; i++)
    {
        int t, a, b;
        t = queryt[i];
        a = querya[i];
        b = queryb[i];
        if (t == 1)
        {
            char temp;
            temp = s.at(a - 1);
            s.at(a - 1) = s.at(b - 1);
            s.at(b - 1) = temp;
        }
        else
        {
            string f = s.substr(0, n);
            string b = s.substr(n, n);
            s = b + f;
        }
    }
    cout << s << endl;
}