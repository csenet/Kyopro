#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
    string input;
    cin >> input;
    int ans = 0;
    int num = input.length();
    //ABをDに置き換え
    replace(input.begin(),input.end(),"AB",'D');
    bool none=false;
    cout << input << endl;
    while(!none){
      none=true;
      for(int i=0;i<num;i++){
        if(input[i]=='D'&&input[i-1]=='A'){
          ans++;
          input[i]=='A';
          input[i-1]=='D';
          none=false;

          break;
        }
      }
    }
    cout << ans << endl;
    return 0;
}
