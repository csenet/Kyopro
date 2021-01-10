#include<bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,k=0;
  cin >> a >> b;
  bool flag = false;
  for(k=1;k<max(abs(a),abs(b));++k){
    if(abs(a-k)==abs(b-k)){
      flag = true;
      break;
    }
  }
  if(!flag){
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }
  cout << k << endl;
  return 0;
}
