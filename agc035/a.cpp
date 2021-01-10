#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;

int main(void){
    const ll INF = 1000000007;
    ll b, c, n;
    string ans;
    cin >> n;
    ll a[n];
    c = 0;
    for(ll i = 0; i < n; i++){
         cin >> a[i];
         c += a[i];
    }
    b = 0;
    ll x = n / 3;
    sort(a,a+n);
    if(c == 0);
    else if(n%3 != 0)b++;
    else for(ll i = 0; i < x; i++){:
        if(((a[i]^a[i+x])^a[i + 2*x]) == 0 && a[0] == a[i] && a[x] == a[i+x] && a[2*x] == a[i + 2*x]);else b++;
    }
    if(b==0)ans = "Yes";
    else ans = "No";
    cout << ans << endl;

    return 0;
}
