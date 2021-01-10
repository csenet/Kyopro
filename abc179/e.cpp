#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n, x, m;
    cin >> n >> x >> m;
    long long sum = x;
    long long a = x;
    long long temp = 0;
    for (int i = 2; i <= n; i++)
    {
        a = (a * a) % m;
        if (a == 0)
        {
            cout << "Loop" << endl;
        }
        sum += a;
    }

    cout << sum << endl;
    return 0;
}