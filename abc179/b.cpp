#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int counter = 0;
    bool isCont = false;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            isCont = true;
            counter++;
        }
        else
        {
            if (isCont)
            {
                if (counter >= 3)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            isCont = false;
            counter = 0;
        }
    }
    if (isCont)
    {
        if (counter >= 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}