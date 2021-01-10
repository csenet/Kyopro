#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N=0,max=0;
    cin >> N;
    vector<int> value(N);
    vector<int> price(N);
    for(int i=0;i<N;i++)cin >> value[i];
    for(int i=0;i<N;i++)cin >> price[i];
    for(int i=0;i<N;i++){
        int data=value[i]-price[i];
        if(data>0)max+=data;
    }
    cout << max << endl;
    return 0;
}
