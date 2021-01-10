#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int r, D, x2000;
    cin >> r >> D >> x2000;
    long long ans = 0, b = x2000;
    for (int i = 2001; i <= 2010; i++)
    {
        long long c = 0;
        c = r * b - D;
        cout << c << endl;
        b = c;
    }
    return 0;
}