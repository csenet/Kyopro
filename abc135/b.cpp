#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  vector<int> input(n);
  vector<bool> check(n-1);
  for(int i=0;i<n;++i)cin >> input[i];
  int Double = 0;
  bool sorted = true;
  for(int i=0;i<n-1;i++){
    if(input[i]>input[i+1]){
      sorted = false;
      check[i]=false;
      if((i!=0)&&(!check[i-1])){
        Double++;
      }
    }else{
      check[i]=true;
    }
  }
  if(!check[0]&&!check[n-2])Double++;
  if(sorted){
    cout << "YES" << endl;
    return 0;
  }
  if(n==3&&(input[0]<input[n-1])){
    Double=1;
  }
  if(Double==1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
