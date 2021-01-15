#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, a, b;
    cin >> n;
    vector<string> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    for (int i = 0; i < n; i++)
    {
        if (data[i].at(data[i].length() - 1) == 'A')
            a++;
        if (data[i].at(data[i].length() - 1) == 'B')
            b++;
    }

    return 0;
}