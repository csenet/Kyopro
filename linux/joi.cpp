#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> a(4);
    vector<int> b(2);
    vector<int> asum(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    for (int i = 0; i < 2; i++)
        cin >> b[i];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; i++)
        {
            if (j != i)
                asum[i] += a[j];
        }
    }
    int max = asum[1];
    for (int i = 1; i < 4; i++)
    {
        if (asum[i] > max)
            max = asum[i];
    }
    if (b[0] > b[1])
    {
        max += b[0];
    }
    else
    {
        max += b[1];
    }
    cout << max << endl;
    return 0;
}