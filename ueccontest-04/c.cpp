#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int count = 0;
    int ap = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        count += temp;
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ap += temp;
    }
    if (count <= ap)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}