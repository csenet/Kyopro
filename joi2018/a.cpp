#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    int count = 0;
    int day = 0;
    while(count<c){
      day++;
      if(day%7==0)count+=b;
      count+=a;
    }
    cout << day << endl;
    return 0;
}
