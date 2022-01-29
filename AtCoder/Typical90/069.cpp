#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long intpow(long long int n, long long int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) {
			ans *= n;
			ans %= MOD;
		}
		n *= n;
		n %= MOD;
		r >>= 1LL;
	}
	return ans % MOD;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, k;
	cin >> n >> k;
	long long int ans;
	if (n == 1)
		ans = k;
	else if (n == 2)
		ans = k * (k - 1) % MOD;
	else {
		ans = k * (k - 1) % MOD;
		ans *= intpow(k - 2, n - 2);
		ans %= MOD;
	}
	cout << ans << endl;
}