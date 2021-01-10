#include<iostream>
using namespace std;

int main(){
    int b,t,mai=1,a;
    //input
    cin >> a >> b >> t;
    //do
    for(int i=1;i<=t;i++){
        if(i%a==1)mai+=b;
    }
    cout << mai << endl;
    return 0;
}

