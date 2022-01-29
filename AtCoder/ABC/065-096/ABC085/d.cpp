#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, h;
	pair<int, int> d[200005];
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		d[2 * i] = {a, 0};
		d[2 * i + 1] = {b, 1};
	}
	sort(d, d + 2 * n, greater<pair<int, int>>());
	int ans = 0;
	for (int i = 0;; i++) {
		if (d[i].second == 0) {
			ans += (h + d[i].first - 1) / d[i].first;
			cout << ans << endl;
			return 0;
		} else {
			ans++;
			h -= d[i].first;
			if (h <= 0) {
				cout << ans << endl;
				return 0;
			}
		}
	}
}