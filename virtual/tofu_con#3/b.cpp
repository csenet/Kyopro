#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string input = "";
  cin >> input;
  bool is_only = false;
  bool flag1 = true;
  bool flag = true;
  if(input.at(0)=='A'){
    for(int i=2;i<=input.length()-2;++i){
      if(input.at(i)=='C'&&flag1){
        flag1 = false;
        is_only = true;
      }else{
        if(input.at(i)=='C'&&flag1==false)is_only=false;
      }
    }
    for(int i=0;i<input.length();++i){
      char now = input.at(i);
      if(!(i==0&&now=='A')&&now!='C'){
        if(now<0x61||now>0x7a){
          flag = false;
        }
      }
    }
    if(flag&&is_only){
      cout << "AC" << endl;
      return 0;
    }
  }
  cout << "WA" << endl;
  return 0;
}
