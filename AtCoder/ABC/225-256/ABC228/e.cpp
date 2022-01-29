#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long intpow(long long int n, long long int r, int m) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans = (__int128)ans * n % m;
		n = (__int128)n * n % m;
		r >>= 1;
	}
	assert(ans >= 0 && ans < m);
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, k, m;
	cin >> n >> k >> m;
	if (m % MOD == 0) {
		cout << 0 << endl;
		return 0;
	}
	long long int x = intpow(k, n, MOD - 1);
	int ans = intpow(m, x, MOD);
	cout << ans << endl;
}
