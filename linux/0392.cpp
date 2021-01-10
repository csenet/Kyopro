#include<bits/stdc++.h>
using namespace std;
int main(void){
    int party,dress;
    cin >> dress >> party;
    if(party<dress){
        cout<<1<<endl;
    }else{
        cout <<(party/dress)+(party%dress)-1 <<endl;
    }
    return 0;
}
