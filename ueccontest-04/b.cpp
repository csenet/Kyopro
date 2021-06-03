#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if ((a > 0 && b < 0) || (a < 0 && b > 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}