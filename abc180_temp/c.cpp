#include <bits/stdc++.h>
using namespace std;
vector< int64_t > divisor(int64_t n) {
  vector< int64_t > ret;
  for(int64_t i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}
int main(void){
    int64_t input= 0;
    cin >> input;
    vector<int64_t> data = divisor(input);
    for(Int i=0;i<data.length;i++){
        cout << data[i] << endl;
    }
}