#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int D, G;
  cin >> D >> G;
  int data[D][2];
  for(int i=0;i<D;++i)
    cin >> data[i][0] >> data[i][1];
  int goal = D;
  int ans = 0;
  int i = D;
  while(goal>=0&&i>=0){
    if(goal>data[i][0]*(i*100)){
      ans+=data[i][0];
      goal-=data[i][0]*(i*100);
    }else{
      int times = 0;
      while(times <= data[i][0]&&goal>=0){
        goal-=100*i;
        times++;
      }
      ans+=times;
    }
    i--;
  }
  cout << ans << endl;
  return 0;
}
