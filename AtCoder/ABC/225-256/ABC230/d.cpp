#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, d;
	cin >> n >> d;
	pair<int, int> m[200005];
	map<int, int> k;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		r++;
		if (k[l] != 0)
			k[l] = min(k[l], r);
		else
			k[l] = r;
		m[i] = {l, -r};
	}
	sort(m, m + n);
	for (int i = 0; i < n; i++) m[i].second *= -1;
	int ans = 0;
	int p = 0;
	int x = k[m[0].first];
	while (p < n - 1) {
		p++;
		if (k[m[p].first] <= x) {
			x = k[m[p].first];
			if (p == n - 2) ans++;
		} else {
			ans++;
			while (m[p].first < x + d - 1) {
				p++;
				if (p == n) {
					ans++;
					break;
				}
			}
			x = k[m[p].first];
		}
	}
	cout << ans << endl;
}