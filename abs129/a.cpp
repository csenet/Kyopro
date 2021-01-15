#include<bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> data(3);
    cin >> data[0] >> data[1] >> data[2];
    sort(data.begin(),data.end());
    cout << data[0]+data[1] << endl;
}
