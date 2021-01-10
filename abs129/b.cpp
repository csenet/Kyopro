#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i=0;i<n;i++)cin >> data[i];
    sort(data.begin(),data.end());
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=data[i];
    }
    int sum2=0;
    int i=0;
    do{
      sum2+=data[i];
      i++;
    }while(data[i]<=(data[0]+data[n-1])/2);
    sum2-=data[i-1];
    cout << abs((sum-sum2)-sum2) << endl;
}
