#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int h, w;
    cin >> h >> w;
    int field[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char moji;
            cin >> moji;
            if (moji == '#')
                field[i][j] = 1;
            else if (moji == '.')
                field[i][j] = 0;
        }
    }
    //黒を探す
    bool all_black = false;
    bool all_white = false;
    int times = 0;
    while (!all_black && !all_white)
    {
        all_black = true;
        all_white = true;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (field[i][j] == 0 || field[i][j] == 2)
                {
                    all_black = false;
                }
                if (field[i][j] == 1)
                {
                    //辺を黒く塗る
                    if (i - 1 >= 0 && field[i - 1][j] == 0)
                    {
                        field[i - 1][j] = 2;
                    }
                    if (i + 1 < h && field[i + 1][j] == 0)
                    {
                        field[i + 1][j] = 2;
                    }
                    if (j - 1 >= 0 && field[i][j - 1] == 0)
                    {
                        field[i][j - 1] = 2;
                    }

                    if (j + 1 < w && field[i][j + 1] == 0)
                    {
                        field[i][j + 1] = 2;
                    }
                    all_white = false;
                }
            }
        }
        times++;
        if (all_black || all_white)
            times--;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (field[i][j] == 2)
                    field[i][j] = 1;
            }
        }
        /*
        cout << "-------------\n";
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << field[i][j];
            }
            cout << endl;
        }
        cout << times << "回" << all_black << endl;
        */
    }
    cout << times << endl;
    return 0;
}