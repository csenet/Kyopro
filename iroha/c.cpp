#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, i;
    cin >> n;
    vector<int> bh(n);
    vector<int> h(n);
    unordered_map<int, int> H;
    for (i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        bh[i] = input;
        h[i] = input;
    }
    sort(h.begin(), h.end());
    int next = 0;
    for (i = 0; i < n; i++)
    {
        if (h[i] != h[i - 1])
            next++;
        H[h[i]] = next;
    }
    for (i = 0; i < n; i++)
    {
        cout << H[bh[i]] << "\n";
    }
    return 0;
}