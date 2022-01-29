#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int a[100005] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[max(x, y)]++;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i + 1] == 1) ans++;
	}
	cout << ans << endl;
}