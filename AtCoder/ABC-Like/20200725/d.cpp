#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int a[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i + 1];
	long long int dp[100] = {};
	dp[0] = 1000;
	for (int i = 1; i <= n; i++) {
		long long int m = dp[i - 1];
		for (int j = 1; j < i; j++) {
			long long int x = dp[j] / a[j];
			long long int r = dp[j] - x * a[j];
			m = max(m, x * a[i] + r);
		}
		dp[i] = m;
	}
	cout << dp[n] << endl;
}