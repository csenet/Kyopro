#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    if (s.at(s.length() - 1) == 's')
        cout << s << "es" << endl;
    else
        cout << s << 's' << endl;
    return 0;
}