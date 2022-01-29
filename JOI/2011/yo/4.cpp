#include <bits/stdc++.h>
using namespace std;

int n;
int a[105];
long long int m[25][105];

long long int dp(int s, int p) {
	if (m[s][p] != -1) return m[s][p];
	if (p == n - 1) {
		if (s == a[n - 1])
			return 1;
		else
			return 0;
	}
	long long int ans = 0;
	if (s + a[p] <= 20) ans += dp(s + a[p], p + 1);
	if (p > 0 && s - a[p] >= 0) ans += dp(s - a[p], p + 1);
	m[s][p] = ans;
	return ans;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	memset(m, -1, sizeof(m));
	cout << dp(0, 0) << endl;
}