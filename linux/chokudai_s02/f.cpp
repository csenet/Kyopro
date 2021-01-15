#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    map<int, int> comp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (comp[min(a, b)] != max(a, b))
        {
            comp[min(a, b)] = max(a, b);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
