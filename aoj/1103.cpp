#pragma GCC optimize "-O3"
#pragma GCC target ("avx")
#define _USE_MATH_DEFINES
#include<numeric>
#include<bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i=0;i<n;++i)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a,0,sizeof(a))
#define inf (1ll<<60)
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v),greater<int>())
#define SPEED ios::sync_with_stdio(false);cin.tie(0);cout<<fixed<<setprecision(12)
signed gcd(int a, int b){return b?gcd(b,a%b):a;}
signed lcm(int a, int b){return a*b/gcd(a,b);}
//priority_queue<int, vi, greater<int> > que;//昇順
int euclid(int n);
int isSosuu(int n);
using namespace std;

const int mod=1e9+7;

signed main(){
SPEED;
  while(true){
    int input;
    cin >> input;
    if(input==0)break;
    cout << euclid(input) << endl;
  }
  return 0;
}

int euclid(int n) {
   int p=0,q=0;
   int ans=0;
   for(p=2;p<n;p++){
     q=n-p;
     if(p>q)break;
     if(isSosuu(p)&&isSosuu(q))ans++;
   }
   return ans;
}

int isSosuu(int n){
  int ans = true;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)ans=false;
  }
  return ans;
}
