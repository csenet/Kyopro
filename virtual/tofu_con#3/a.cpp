#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int rate = 0;
  cin >> rate;
  if(rate>=2800){
    cout << "AGC" << endl;
  }else if(rate>=1200){
    cout << "ARC" << endl;
  }else{
    cout << "ABC" << endl;
  }
  return 0;
}
