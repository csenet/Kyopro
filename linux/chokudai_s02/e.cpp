#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        ans += min(a / 2, b);
    }
    cout << ans << endl;
    return 0;
}
