#include <bits/stdc++.h>
using namespace std;
int dp[10][1000005] = {};
const int MOD = 998244353;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++) dp[i][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = -1; k <= 1; k++) {
				if (j + k > 0 && j + k < 10) {
					dp[j + k][i + 1] += dp[j][i];
					dp[j + k][i + 1] %= MOD;
				}
			}
		}
	}
	long long int ans = 0;
	for (int i = 1; i < 10; i++) {
		ans += dp[i][n - 1];
	}
	ans %= MOD;
	cout << ans << endl;
}