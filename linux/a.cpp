#include <iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0, coin = 0;
    cin >> a >> b;
    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            coin += a;
            a--;
        }
        else if (b > a)
        {
            coin += b;
            b--;
        }
        else
        {
            coin += a;
            a--;
        }
    }
    cout << coin << endl;
}