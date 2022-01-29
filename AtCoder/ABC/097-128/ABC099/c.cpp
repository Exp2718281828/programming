#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		n *= n;
		r >>= 1;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int dp[100005];
	cin >> n;
	fill(dp, dp + n + 1, INF);
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int t = 1; i + t <= n; t *= 6) {
			dp[i + t] = min(dp[i + t], dp[i] + 1);
		}
		for (int t = 9; i + t <= n; t *= 9) {
			dp[i + t] = min(dp[i + t], dp[i] + 1);
		}
	}
	cout << dp[n] << endl;
}