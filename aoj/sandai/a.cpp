#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> data(n);
    for (int i = 0; i < 3; ++i)
    {
        float MAX = 0;
        for (int j = 0; j < n; ++j)
        {
            float input = 0;
            MAX = max(input, MAX);
            data[j] = make_pair(MAX, j);
        }
    }
    sort(data.begin(), data.end());
    for (int i = 0; i < n; ++i)
    {
        cout << data[i].second << endl;
    }
}