#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, k;
    unsigned long long now = 1, prev = 1;
    cin >> n >> k;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    for (int i = 0; i < n; i++)
    {
        now *= data[i];
        if (i >= k)
        {
            now /= data[i - k];
            if (now > prev)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        prev = now;
    }
    return 0;
}