#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    //入力
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);
    map<int, int> ab;
    map<int, int> cd;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i] >> d[i];
    for (int i = 0; i < n; i++)
    {
        ab[a[i]] = b[i];
        cd[c[i]] = d[i];
    }
    for (int i = 0; i < n; i++)
    {
        sort(a.begin(), a.end());
        sort(c.begin(), c.end());
        if (c[0] < a[i] && cd[c[0]] < ab[a[i]])
        {
            ans++;
            c[0] = 101;
        }
    }
    cout << ans << endl;
}