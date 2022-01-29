#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		n *= n;
		r >>= 1;
		ans %= MOD;
	}
	return ans;
}

int n, d;

int f(int m) {
	if (d < m - 1)
		return 0;
	else if (d == m - 1)
		return 1;
	else if (d <= 2 * (m - 1))
		return intpow(2, d);
	else
		return 0;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> d;
	long long int ans = 0;
	for (int i = 0; i <= n; i++) {
		ans += f(i) * (intpow(2, n - i + 1) - 1);
		ans %= MOD;
	}
	cout << ans << endl;
}