#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int c[100005] = {};
	int u[100005] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> c[i];
	for (int i = 0; i < m - 1; i++) {
		int x = c[i];
		int y = c[i + 1];
		if (x > y) swap(x, y);
		u[x - 1]++, u[y - 1]--;
	}
	for (int i = 0; i < n - 1; i++) u[i + 1] += u[i];
	long long int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		long long int x, y, z;
		cin >> x >> y >> z;
		ans += min(x * u[i], y * u[i] + z);
	}
	cout << ans << endl;
}