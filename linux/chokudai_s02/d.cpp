#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    long long a, b, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long aa, bb;
        cin >> aa >> bb;
        sum += max(aa, bb);
    }
    cout << sum << endl;
    return 0;
}
