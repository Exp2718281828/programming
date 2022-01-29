#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	pair<int, int> a[2005] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x].first++;
	}
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		a[x].second = 1;
	}
	int ans = 0;
	for (int i = 1; i < 2001; i++) {
		ans += a[i].first * a[i].second;
	}
	cout << ans << endl;
}