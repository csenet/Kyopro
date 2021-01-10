#include <bits/stdc++.h>
using namespace std;
int main(void){
	int x,ans = 0;
	cin >> x;
	int coins[2] = {500,5};
	int happiness[2] = {1000,5};
	for(int i=0;i<2;i++){
		ans+=(x/coins[i])*happiness[i];
		x %= coins[i];
	}
	cout << ans << endl;
	return 0;
}
