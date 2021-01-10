#include <bits/stdc++.h>
using namespace std;
double logbase(double a, double base)
{
   return log(a) / log(base);
}
int main(void){
    long long x,y,a,b;
    cin >> x >> y >> a >> b;
    long long exp = 0;

    cout << (y-x)/b << endl << logbase(y-x,x)  << endl;
}