#include <bits/stdc++.h>
using namespace std;

const int INF = (1LL << 31) - 1;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int a[200005];
	vector<int> q[200005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		q[x - 1].push_back(y - 1);
	}
	int dp[200005];
	fill(dp, dp + n, INF);
	int ans = -INF;
	for (int i = 0; i < n; i++) {
		for (int x : q[i]) dp[x] = min({dp[x], dp[i], a[i]});
	}
	for (int i = 0; i < n; i++) ans = max(ans, a[i] - dp[i]);
	cout << ans << endl;
}