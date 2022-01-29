#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int p[15];
	for (int i = 0; i < n; i++) cin >> p[i];
	sort(p, p + n, greater<int>());
	int ans = 0;
	for (int i = 0; i < n; i++){
		ans += p[i] / (i == 0 ? 2 : 1);
	}
	cout << ans << endl;
}