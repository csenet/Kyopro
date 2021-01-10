#include <bits/stdc++.h>
using namespace std;
class test2
{
public:
    static int a;
};
int test2::a = 0;
int main(void)
{
    test2 *t = new test2();
    test2 *t2 = new test2();
    t->a = 13;
    cout << t2->a << endl;
    return 0;
}
