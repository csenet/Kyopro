#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define int long long

signed main(void)
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int> > data;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> input;
        cin >> input.first >> input.second;
        data.push_back(input);
    }
    sort(data.begin(), data.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (x <= data[i].second)
        {
            ans += data[i].first * x;
            break;
        }
        else
        {
            ans += data[i].first * data[i].second;
            x -= data[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}