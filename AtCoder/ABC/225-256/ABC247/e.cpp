#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x, y;
	cin >> n >> x >> y;
	int a[200005];
	for (int i = 0; i < n; i++) cin >> a[i];
	long long int ans = 0;
	if (x == y) {
		long long int c = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				c++;
			} else {
				ans += c * (c + 1) / 2;
				c = 0;
			}
		}
		ans += c * (c + 1) / 2;
	} else {
		int dp[4] = {};
		for (int i = 0; i < n; i++) {
			int ndp[4] = {};
			if (a[i] < y || a[i] > x) {
			} else if (a[i] == y) {
				ndp[2] = dp[0] + dp[2] + 1;
				ndp[3] = dp[1] + dp[3];
			} else if (a[i] == x) {
				ndp[1] = dp[0] + dp[1] + 1;
				ndp[3] = dp[2] + dp[3];
			} else {
				ndp[0] = dp[0] + 1;
				ndp[1] = dp[1];
				ndp[2] = dp[2];
				ndp[3] = dp[3];
			}
			for (int j = 0; j < 4; j++) dp[j] = ndp[j];
			ans += dp[3];
		}
	}
	cout << ans << endl;
}