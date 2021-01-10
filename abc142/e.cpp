#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  std::vector<pair<int,int>> data(n);
  for(int i=0;i<n;++i){
    cin >> data[i].first;
    data[i].second = i+1;
  }
  sort(data.begin(),data.end());
  for(int i=0;i<n;++i){
    cout << data[i].second << " ";
  }
  cout << endl;
  return 0;
}
