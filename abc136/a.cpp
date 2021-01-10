#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    int d = a-b;
    if(c-d>0)cout << c-d << endl;
    else cout << 0 << endl;
    return 0;
}
