#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, sum = 0;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];
    for (int i = 0; i < n; i++)
    {
        int num = 0; //ちぎる枚数
        int flower = input[i];
        while (flower % 2 == 0 || flower % 3 == 2)
        {
            flower--;
            num++;
        }
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
