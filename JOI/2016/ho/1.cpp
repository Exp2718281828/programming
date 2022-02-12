#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1LL << 60;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, k;
	long long int a[20005];
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long int dp[20005];
	fill(dp, dp + n + 1, INF);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		long long int p, q;
		p = q = a[i - 1];
		for (int j = 0; j <= min(i - 1, m - 1); j++) {
			p = max(p, a[i - j - 1]);
			q = min(q, a[i - j - 1]);
			dp[i] = min(dp[i], dp[i - j - 1] + k + (p - q) * (j + 1));
		}
	}
	cout << dp[n] << endl;
}