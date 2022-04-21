#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	int dp[55][2505] = {};
	for (int i = 1; i <= m; i++) dp[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m * n; j++) {
			for (int l = max(1, j - m); l <= j - 1; l++) {
				dp[i][j] += dp[i - 1][l];
				dp[i][j] %= MOD;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += dp[n][i];
		ans %= MOD;
	}
	cout << ans << endl;
}