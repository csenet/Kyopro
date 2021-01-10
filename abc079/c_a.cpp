#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, a, b) for (int i = 0; i < b; i++)
#define REP(i, a, b) for (int i = 0; i <= b; i++)
#define rev(i, n) for (int i = n - 1; i >= 0; i--)
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
#define Yes(f) cout << (f ? "Yes" : "No") << endl //fが真の場合Yesを出力、偽の場合Noを出力
#define yes(f) cout << (f ? "yes" : "no") << endl
#define YES(f) cout << (f ? "YES" : "NO") << endl
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())

using namespace std;

const int mod = 1e9 + 7;

signed main()
{
    int num;
    cin >> num;
    vi abc(4);
    rep(i, 4)
    {
        abc[i] = num % 10;
        num /= 10;
    }
    reverse(all(abc));
    int a, b, c, d;
    a = abc[0];
    b = abc[1];
    c = abc[2];
    d = abc[3];
    int opt1, opt2, opt3;
    opt1 = opt2 = opt3 = 1;

    rep(i, 2)
    {
        rep(j, 2)
        {
            rep(k, 2)
            {
                if (k == 0)
                    opt1 = 1;
                else
                    opt1 = -1;
                if (j == 0)
                    opt2 = 1;
                else
                    opt2 = -1;
                if (i == 0)
                    opt3 = 1;
                else
                    opt3 = -1;
                if (a + b * opt1 + c * opt2 + d * opt3 == 7)
                {
                    char one, two, three;
                    if (opt1 == -1)
                        one = '-';
                    else
                        one = '+';
                    if (opt2 == -1)
                        two = '-';
                    else
                        two = '+';
                    if (opt3 == -1)
                        three = '-';
                    else
                        three = '+';
                    cout << a << one << b << two << c << three << d << "=7" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}