#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,r;
  cin >> n >> r;
  int i=n;
  int a,b;
  a=b=0;
  int min=INT_MAX;
  while(i<=r){
    if(i%2019<min){
      min=i%2019;
      a=i;
      b=i+1;
      if(b>r){
        if(b-2>=n){
          a--;
          b--;
        }else{
          b=a;
        }
      }
      if(min==0)break;
    }
    i++;
  }
  cout << "a:" << a << "b:" << b << endl;
  cout << (a*b)%2019 << endl;
}
