#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
  ll n,m;
  cin >> n >> m;
  ll a,b,c;
  cin >> a >> b >> c;
  ll i,j;
  for(i=0;i<n;++i){
    for(j=0;j<n;++j){
      ll k = n-(i+j);
      if(a*i+b*j+c*k==m&&k>=0){
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}
