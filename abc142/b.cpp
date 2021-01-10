#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,k;
  cin >> n >> k;
  std::vector<int> height(n);
  int ans = 0;
  for(int i=0;i<n;++i){
    int height;
    cin >> height;
    if(height>=k)ans++;
  }
  cout << ans << endl;
  return 0;
}
