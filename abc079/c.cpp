#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int aa, bb, cc, dd;
    int a, b, c, d;
    int fugou = 0b000;
    string output = "";
    string input;
    cin >> input;
    aa = input.at(0) - 48;
    bb = input.at(1) - 48;
    cc = input.at(2) - 48;
    dd = input.at(3) - 48;
    for (int i = 0; i < 8; i++)
    {
        a = aa;
        b = bb;
        c = cc;
        d = dd;
        output = "";
        output += to_string(aa);
        if (fugou & 0b001)
        {
            b = a + b;
            output += "+";
        }
        else
        {
            b = a - b;
            output += "-";
        }
        output += to_string(bb);
        if (fugou & 0b010)
        {
            c = b + c;
            output += "+";
        }
        else
        {
            c = b - c;
            output += "-";
        }
        output += to_string(cc);
        if (fugou & 0b100)
        {
            d = c + d;
            output += "+";
        }
        else
        {
            d = c - d;
            output += "-";
        }
        output += to_string(dd);
        if (d == 7)
        {
            output += "=7";
            cout << output << endl;
            return 0;
        }
        fugou += 0b1;
    }
    return 0;
}