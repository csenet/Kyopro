#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    float x, y, a, b, sx, sy, tx, ty;
    cin >> x >> y >> a >> b >> sx >> sy >> tx >> ty;
    float A = (b - a) / x;
    float SY = A * sx + a;
    float TY = A * tx + a;
    if ((SY > sy && TY < ty) || (SY < sy && TY > ty))
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}
