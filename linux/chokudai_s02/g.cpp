#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b);
int main(void)
{
    int n;
    cin >> n;
    vector<long> output(n);
    for (int i = 0; i < n; i++)
    {
        long a, b;
        cin >> a >> b;
        output[i] = gcd(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
long gcd(long a, long b)
{
    long r;
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}