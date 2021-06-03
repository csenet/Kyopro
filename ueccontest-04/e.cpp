#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string s;
    int n;
    int c = 100;
    cin >> s >> n;
    int length = s.length();
    for (int i = 0; i < pow(2, length); i++)
    {
        int num = 0;
        int temp = i;
        for (int j = 0; j < length; j++)
        {
            if (temp & 1)
            {
                num += pow(10, j) * 9;
            }
            else
            {
                num += pow(10, j) * 6;
            }
            temp = temp >> 1;
        }
        if (num % n == 0)
        {
            int dif = 0;
            string ans = to_string(num);
            for (int j = 0; j < ans.length(); j++)
            {
                if (ans.at(j) != s.at(j))
                {
                    dif++;
                }
            }
            c = min(c, dif);
        }
    }
    if (c != 100)
    {
        cout << c << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}