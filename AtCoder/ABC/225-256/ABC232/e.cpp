#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX = 1000005;
long long fac[MAX], finv[MAX], inv[MAX];
long long int h, w, k, x1, x2, y1, y2;

void combinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++) {
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

long long combmod(int n, int r) {
	if (n < r) return 0;
	if (n < 0 || r < 0) return 0;
	return fac[n] * (finv[r] * finv[n - r] % MOD) % MOD;
}

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		ans %= MOD;
		n *= n;
		n %= MOD;
		r >>= 1;
	}
	return ans;
}

long long int f(int x) {
	long long int ans = 0;
	for (int i = 1; i < k; i++) {
		ans += intpow(h, i - 1) * intpow(w, k - i - 1) % MOD * combmod(k, i) % MOD;
		ans %= MOD;
	}
	return ans;
}



int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int ans = 0;
	cin >> h >> w >> k >> x1 >> y1 >> x2 >> y2;
	combinit();

	cout << ans << endl;
}