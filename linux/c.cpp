#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ctoi(const char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return -1;
    }
}

int main(void)
{
    string input = "";
    cin >> input;
    int back = ctoi(input[0]); //1つ前のやつ
    int change_color = 10;     //かぶってる色
    int times = 0;
    for (int i = 1; i < input.length(); i++)
    {
        int now = ctoi(input[i]);
        if (back == now)
        {
            change_color = now;
        }
        back = now;
        if (change_color != 10)
        {
            if (now != change_color)
            {
                if (change_color > 0)
                {
                    input[i - 1] = '0';
                    input[i] = '1';
                    times += 2;
                }
                else
                {
                    input[i - 1] = '1';
                    input[i] = '0';
                    times += 2;
                }
            }
            else
            {
                if (change_color > 0)
                {
                    input[i] = '0';
                    times++;
                }
                else
                {
                    input[i] = '1';
                    times++;
                }
            }
            change_color = 10;
            now = ctoi(input[i]);
            back = now;
        }
    }
    cout << times << endl;
    return 0;
}