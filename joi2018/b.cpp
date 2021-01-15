#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    std::vector<int> field(2019,0);
    for(int i=0;i<n;++i){
      int temp;
      cin >> temp;
      field[temp-1] = 1;
    }
    int m;
    cin >> m;
    std::vector<int> task(m);
    for(int i:task){
      cin >> task[i];
    }
    for(int i=0;i<m;i++){
      if(field[task[i]+1]==0){
        field[task]
      }
    }
    return 0;
}
