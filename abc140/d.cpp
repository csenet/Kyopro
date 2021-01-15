#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, k;
    cin >> n >> k;
    char input[n];
    for (int i = 0; i < n; ++i)
        cin >> input[i];
    int L, R;
    L = R = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'L')
            L++;
        else
            R++;
    }
    for (int i = 0; i < n; i++)
    {
    }
}
