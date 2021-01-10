#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n ;
    vector<int> data(n);
    for(int i=0;i<n;i++){
        cin >> data[i];
    }
    unsigned long long man=0;
    for(int i=0;i<n;i++){
        man+=abs(data[i]);
    }
    double man2 = 0;
    for(int i=0;i<n;i++){
         man2+=pow(data[i],2.0);
    }
    cout << man2 << endl;
    int MAX = 0;
    for(int i=0;i<n;i++){
    MAX=max(abs(data[i]),MAX);
    }
    cout << man << endl;
    printf("%.15lf\n",pow(man2,0.5));
    cout << MAX << endl;
    return 0;
}