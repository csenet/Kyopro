#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    long long n, a = 2, b = 1, c;
    cin >> n;
    if (n == 0)
    {
        cout << a << endl;
    }
    else if (n == 1)
    {
        cout << b << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
}