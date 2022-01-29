#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

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
	long long int l, r;
	cin >> l >> r;
	long long int ans = 0;
	for (int i = 1; i < 19; i++) {
		if (intpow(10, i) <= l || r < intpow(10, i - 1)) continue;
		ans += ((min(intpow(10, i) - 1, r) - max(intpow(10, i - 1), l) + 1) % MOD) *
			   ((min(intpow(10, i) - 1, r) + max(intpow(10, i - 1), l)) % MOD) % MOD * 500000004 % MOD * i % MOD;
		ans %= MOD;
	}
	if (r == (long long)1e18) ans += (long long)1e18 % MOD * 19 % MOD;
	ans %= MOD;
	cout << ans << endl;
}