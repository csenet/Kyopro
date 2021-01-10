#include<bits/stdc++.h>
using namespace std;

bool sarch(int);
int main(void){
  int n;
  cin >> n;
  struct vec3{
    int x;
    int y;
    int z;
  };
  vector<vec3> data(n);
  for(int i=0;i<n;++i){
    cin >> data[i].x >> data[i].y >> data[i].z;
  }
  for(int i=0;i<n;++i){
    bool flag = false;
    for(int j=0;j<n;j++){
      if(data[j].x<data[i].x&&data[j].y<data[i].y&&data[j].z<data[i].z&&j!=i){
        flag = true;
        break;
      }
    }
    if(flag){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}
