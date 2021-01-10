#include <bits/stdc++.h>
using namespace std;
//A<B<Cを満たす
int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if (a >= b)
        {
            b = b * 2;
        }
        else if (b >= c)
        {
            c = c * 2;
        }
    }
    if (a < b && b < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}