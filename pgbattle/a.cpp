#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,k;
  cin >> n >> k;
  std::vector<int> data(n);
  for(int i=0;i<n;++i){
    cin >> data[i];
  }
  int ans = 0;
  for(int i=0;i<n;++i){
    if(data[i]>k){
      ans+=data[i]-k;
    }
  }
  cout << ans << endl;
  return 0;
}
