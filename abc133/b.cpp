#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,d;
  cin >> n >> d;
  int data[n][d];
  for(int i=0;i<n;i++){
    for(int j=0;j<d;j++){
      cin >> data[i][j];
    }
  }
  //処理
  int ans = 0;
  int sum=0;
  int i=0;
  int k=0;
  while(i<n){
    k=i+1;
    while(k<n){
      sum = 0;
      if(k>=n)k=0;
      for(int j=0;j<d;j++){
        sum += pow(data[i][j]-data[k][j],2.0);
      }
      float n = sqrt(sum);
      if (ceil(n) == floor(n))ans++;
      k++;
    }
    i++;
  }

  cout << ans << endl;
  return 0;
}
