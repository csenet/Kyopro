#include<bits/stdc++.h>
using namespace std;
int GetRandom(int min,int max)
{
	return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
string run(int n,int *input){
  vector<bool> check(n-1);
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
    return "YES";
  }
  if(n==3&&(input[0]<input[n-1])){
    Double=1;
  }
  if(Double==1){
    return "YES";
  }else{
    return "NO";
  }
  return 0;
}
int main(void){
  for(int n=2;n<=50;n++){
    int input[n];
    for(int i=0;i<n;++i){
      input[i] = i;
      cout << i << " ";
    }
    cout << run(n,input) << endl;
  }
}
