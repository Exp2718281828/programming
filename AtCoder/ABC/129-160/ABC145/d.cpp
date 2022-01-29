#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 3 * 1e6;
long long fac[MAX], finv[MAX], inv[MAX];

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

long long combmod(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
	combinit();
	int x, y;
	cin >> x >> y;
	if ((2 * x - y) % 3 != 0 || (2 * y - x) % 3 != 0 || 2 * x - y < 0 || 2 * y - x < 0) {
		cout << 0 << endl;
		return 0;
	}
	int a = (2 * y - x) / 3, b = (2 * x - y) / 3;
	cout << combmod(a + b, a) << endl;
}