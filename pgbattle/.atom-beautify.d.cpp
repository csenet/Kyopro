#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n,m;
  cin >> n >> m;
  int std::vector<pair<int,int>> data;
  for(int i=0;i<m;++i){
    cin >> data[i].first >> data[i].second;
  }
  for(int pr=1;pr<=n;++pr){
    int now;
    for(int i=0;i<m;i++){
      if(data[i].first==pr){
        //1回目見つける
        int now = data[i].second;
        if(now==0){
          cout << "Yes" << endl;
          goto NEXT;
        }else{
        for(int j=0;j<m;j++){
          if(data[j].first==now){
            //2回目見つける
            now = data[j].second;
            if(now==0){
              cout << "Yes" << endl;
              goto NEXT;
            }else{
              continue;
            }
            for(int k=0;k<m;k++){
              if(data[k].first==now){
                //3回目見つける
                now = data[j].second;
                if(now==0){
                  cout << "Yes" << endl;
                  goto NEXT;
                }else{
                  continue;
                }
              }
            }
          }
        }
        continue;
      }
      }
    }
    cout << "No" << endl;
    NEXT:
  }
  return 0;
}
