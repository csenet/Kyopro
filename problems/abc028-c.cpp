#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> data(5);
    for (int i = 0; i < 5; i++)
        cin >> data[i];
    vector<int> stack(32);
    int judge = 0;
    for (int j = 0; j < 32; j++)
    {
        int sum = 0;
        int temp = judge;
        for (int i = 0; i < 5; i++)
        {
            if (temp & 1)
            {
                sum += data[i];
            }
            temp = temp >> 1;
        }
        stack.push_back(sum);
        judge++;
        cout << sum << endl;
    }
}