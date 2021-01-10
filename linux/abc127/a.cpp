#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int a, b, ans = 0;
    cin >> a >> b;
    if (a <= 5)
    {
        ans = 0;
    }
    else if (a <= 12)
    {
        ans = b / 2;
    }
    else
    {
        ans = b;
    }
    cout << ans << endl;
    return 0;
}