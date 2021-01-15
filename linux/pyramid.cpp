#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<vector<int>> data(100, vector<int>(100));
    int N = 0, h = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        x = y = 0;
        cin >> x;
        cin >> y;
        cin >> data[x, y];
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            cout << data[i, j] << " ";
        }
        cout << "\n";
    }
}
