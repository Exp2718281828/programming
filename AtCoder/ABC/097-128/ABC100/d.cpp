#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	vector<long long int> x, y, z;
	cin >> n >> m;
	x.resize(n), y.resize(n), z.resize(n);
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> z[i];
	long long int ans = 0;
	for (int bit = 0; bit < 8; bit++) {
		vector<long long int> sx = x, sy = y, sz = z;
		for (int i = 0; i < n; i++) {
			if (bit & 1) sx[i] *= -1;
			if (bit & 2) sy[i] *= -1;
			if (bit & 4) sz[i] *= -1;
		}
		vector<long long int> s;
		for (int i = 0; i < n; i++) s.push_back(sx[i] + sy[i] + sz[i]);
		sort(s.begin(), s.end(), greater<long long int>());
		long long int a = 0;
		for (int i = 0; i < m; i++) a += s[i];
		ans = max(a, ans);
	}
	cout << ans << endl;
}