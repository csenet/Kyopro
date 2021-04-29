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
    string input;
    cin >> input;
    if ((input.at(0) == input.at(1)) && input.at(0) == input.at(2))
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }
    return 0;
}