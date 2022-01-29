#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	vector<int> c;
	cin >> n >> k;
	c.resize(n + 1, 0);
	for (int i = 2; i <= n; i++) {
		if (c[i] != 0) continue;
		for (int j = 1; i * j <= n; j++) c[i * j]++;
	}
	int ans = 0;
	for (int i = 2; i <= n; i++)
		if (c[i] >= k) ans++;
	cout << ans << endl;
}