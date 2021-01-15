#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(void){
    string input;
    cin >> input;
    for(int i=0; i<input.length();i++){
        int chara = input.at(i);
        if(('a'<=chara&&chara<='z')){
            chara-=0x20;
        }
        input.at(i)=chara;
    }
    cout << input << endl;
    return 0;
}
