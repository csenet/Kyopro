#include<bits/stdc++.h>
using namespace std;
int main(void){
  long long n,max=0,min=1000000001;
  cin >> n;
  for(int i=0;i<n;i++){
    long long a;
    cin >> a;
    if(a>max)max=a;
    if(a<min)min=a;
  }
  cout << abs(max-min) << endl;
  return 0;
}
