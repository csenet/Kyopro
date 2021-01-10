#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int a, b;
    cin >> a >> b;
    int MAX = max(a, b);
    vector<int> Asosuu(MAX);
    vector<int> Bsosuu(MAX);
    Asosuu[1] = 1;
    for (int i = 2; i < a; i++)
    {
        while (a % i == 0)
        {
            Asosuu[i] = 1;
            a /= i;
        }
    }
    Asosuu[a] = 1;
    Bsosuu[1] = 1;
    for (int i = 2; i < b; i++)
    {
        while (b % i == 0)
        {
            Bsosuu[i] = 1;
            b /= i;
        }
    }
    Bsosuu[b] = 1;
    int ans = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (Asosuu[i] == 1 && Bsosuu[i] == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}