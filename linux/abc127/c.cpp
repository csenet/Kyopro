#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<bool> id(n + 1);
    for (int i = 0; i <= n; i++)
        id[i] = false;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 1; j <= n; j++)
        {
            if (a <= j && j <= b)
            {
                if (i == 0)
                {
                    id[j] = true;
                }
            }
            else
            {
                if (id[j - 1])
                {
                    id[j - 1] = false;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (id[i])
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}