#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, max_v, a, b;
    cin >> n;
    cin >> a >> b;
    max_v = a + b;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        int now = a + b;
        if (now > max_v)
            max_v = now;
    }
    cout << max_v << endl;
    return 0;
}
