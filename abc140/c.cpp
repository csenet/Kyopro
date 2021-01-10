#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int data[n - 1];
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> data[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans += data[i];
        else if (i == n - 1)
            ans += data[i - 1];
        else
            ans += min(data[i], data[i - 1]);
    }
    cout << ans << endl;
    return 0;
}
