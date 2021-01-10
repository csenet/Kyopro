#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,min=100000001,sum=0,bsum=0;
  int b=0;
  cin >> n;
  vector<int> input(n);
  for(int i=0;i<n;i++){
    cin >> input[i];
  }
  sum=0;
  for(int i=0;i<n;i++){
    int num = input[i];
    sum+=abs(num-(1+i+b));
    cout << abs(num-(1+i+b)) << ":";
  }
  cout << endl;
while(bsum<sum||bsum==0){
  b--;
  bsum=sum;
  sum=0;
  for(int i=0;i<n;i++){
    int num = input[i];
    sum+=abs(num-(1+i+b));
    cout << abs(num-(1+i+b)) << ":";
  }
  cout << endl;
}
  cout << sum << endl;
  return 0;
}
