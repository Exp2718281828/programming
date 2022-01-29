#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int dp[305];
	fill(dp, dp + 305, INF);
	if (!(n == a || n == b || n == c)) dp[n] = 0;
	for (int i = n; i > 0; i--) {
		if (i >= 1 && i - 1 != a && i - 1 != b && i - 1 != c) dp[i - 1] = min(dp[i] + 1, dp[i - 1]);
		if (i >= 2 && i - 2 != a && i - 2 != b && i - 2 != c) dp[i - 2] = min(dp[i] + 1, dp[i - 2]);
		if (i >= 3 && i - 3 != a && i - 3 != b && i - 3 != c) dp[i - 3] = min(dp[i] + 1, dp[i - 3]);
	}
	if (dp[0] <= 100)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}