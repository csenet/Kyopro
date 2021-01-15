#include <bits/stdc++.h>
#include "Arduino.h"

using namespace std;
int kaze(int direction);
/*0北1南2東3西*/
int main(void)
{
    int x, y, n;
    cin >> x >> y >> n;
    int field[y][x];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        field[a - 1][b - 1] = 0;
    }

    return 0;
}

int kaze(int direction)