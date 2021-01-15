#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a = "";
    int b = -1;
    cin >> a;
    int times = 0;
    bool f = false;
    for (int i = 0; i < a.length(); i++)
    {
        int now = +a.at(i);
        if (now == b)
        {
            if (!f)
                times++;
            times++;
            f = true;
        }
        else
        {
            if (times < 3)
                times = 0;
            f = false;
        }
        b = now;
    }
    if (times >= 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
