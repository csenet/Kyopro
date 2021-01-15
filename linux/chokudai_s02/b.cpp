#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<long> output(n);
    for (int i = 0; i < n; i++)
    {
        long a, b;
        cin >> a >> b;
        output[i] = a % b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
