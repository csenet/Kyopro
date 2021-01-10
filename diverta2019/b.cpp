#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int r, g, b, n;
    int i, j, k;
    int ans = 0;
    cin >> r >> g >> b >> n;
    for (i = 0; i <= n / r; i++)
    {
        for (j = 0; j <= n / g && (j <= i || i == 0); j++)
        {
            for (k = 0; k <= n / b && (k <= i || j == 0); k++)
            {
                int sum = i * r + j * g + k * b;
                if (sum == n)
                {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}