#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    string a[h];
    int p[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {

            p[i][j] = 0;
        }
    }
    for (int i = 0; i < h; i++)
        cin >> a[i];
    queue<pair<int, int>> q;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            if (a[i][j] == '#')
            {
                q.push(mp(i, j));
                p[i][j] = 1;
            }
    }
    int ans = 0;
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        int i = x.ff;
        int j = x.ss;
        if (i - 1 > -1 && p[i - 1][j] == 0)
        {
            q.push(mp(i - 1, j));
            p[i - 1][j] = p[i][j] + 1;
            ans = max(ans, p[i][j] + 1);
        }
        if (j - 1 > -1 && p[i][j - 1] == 0)
        {
            q.push(mp(i, j - 1));
            p[i][j - 1] = p[i][j] + 1;
            ans = max(ans, p[i][j] + 1);
        }
        if (i + 1 < h && p[i + 1][j] == 0)
        {
            q.push(mp(i + 1, j));
            p[i + 1][j] = p[i][j] + 1;
            ans = max(ans, p[i][j] + 1);
        }
        if (j + 1 < w && p[i][j + 1] == 0)
        {
            q.push(mp(i, j + 1));
            p[i][j + 1] = p[i][j] + 1;
            ans = max(ans, p[i][j] + 1);
        }
    }
    if (ans == 0)
        cout << 0 << endl;
    else
        cout << ans - 1 << endl;
}