#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int A[n];
    int B[n];
    int C[n - 1];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> C[i];
    }
    int ans = 0;
    int befo = -100;
    for (int i = 0; i < n; ++i)
    {
        ans += B[A[i] - 1];
        if (A[i] - befo == 1)
        {
            ans += C[A[i] - 2];
        }
        befo = A[i];
    }
    cout << ans << endl;
    return 0;
}
