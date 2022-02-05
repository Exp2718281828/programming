#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int digitnum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (1) {
		n /= d;
		ans++;
		if (n == 0) return ans;
	}
}

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		ans %= MOD;
		n *= n;
		r >>= 1;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	int m = digitnum(n);
	long long int ans = 0;
	for (int i = 1; i < m; i++) {
		long long int k =
			(intpow(10, i) - intpow(10, i - 1)) % MOD * (intpow(10, i) - intpow(10, i - 1) + 1) % MOD * 499122177 % MOD;
		ans += k;
		ans %= MOD;
	}
	long long int t = n - intpow(10, m - 1) + 1;
	t %= MOD;
	long long int u = t * (t + 1) % MOD * 499122177 % MOD;
	ans += u;
	ans %= MOD;
	cout << ans << endl;
}