#include <bits/stdc++.h>
using namespace std;

int dp[2005][2005][2];
const int MOD = 998244353;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, k, s, t, x;
	cin >> n >> m >> k >> s >> t >> x;
	s--, t--, x--;
	vector<int> q[2005];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		q[u].push_back(v);
		q[v].push_back(u);
	}
	dp[0][s][0] = 1;
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			if (j == x) {
				for (int y : q[j]) {
					dp[i][j][0] += dp[i - 1][y][1];
					dp[i][j][1] += dp[i - 1][y][0];
					dp[i][j][0] %= MOD;
					dp[i][j][1] %= MOD;
				}
			} else {
				for (int y : q[j]) {
					dp[i][j][0] += dp[i - 1][y][0];
					dp[i][j][1] += dp[i - 1][y][1];
					dp[i][j][0] %= MOD;
					dp[i][j][1] %= MOD;
				}
			}
		}
	}
	cout << dp[k][t][0] << endl;
}