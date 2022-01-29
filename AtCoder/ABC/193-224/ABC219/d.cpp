#include <bits/stdc++.h>
using namespace std;

int dp[305][625][625];
const int INF = 1 << 30;
int a[305], b[305];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	for (int i = 0; i < 305; i++) {
		for (int j = 0; j < 625; j++) {
			for (int k = 0; k < 625; k++) {
				dp[i][j][k] = INF;
			}
		}
	}
	dp[0][0][0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 620; j++) {
			for (int k = 0; k < 620; k++) {
				// dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
				if (j >= a[i] && k >= b[i])
					dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j - a[i]][k - b[i]] + 1);
				else
					dp[i + 1][j][k] = dp[i][j][k];
			}
		}
	}
	int ans = INF;
	for (int j = x; j < 615; j++) {
		for (int k = y; k < 615; k++) {
			ans = min(ans, dp[n][j][k]);
		}
	}
	if (ans == INF) ans = -1;
	cout << ans << endl;
}