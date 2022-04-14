#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

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

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, l;
	cin >> n >> l;
	int u[20] = {};
	int p[30];
	for (int i = 0; i <= 26; i++) {
		p[i] = intpow(i, l);
	}
	p[0] = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			u[i] |= 1 << (s[j] - 'a');
		}
	}
	long long int ans = 0;
	for (int bit = 1; bit < (1 << n); bit++) {
		int pr = __builtin_popcount(bit) % 2 == 0 ? -1 : 1;
		int k = (1 << 26) - 1;
		for (int i = 0; i < n; i++) {
			if (bit & (1 << i)) k &= u[i];
		}
		int v = __builtin_popcount(k);
		ans += pr * p[v];
		ans += MOD * 10LL;
		ans %= MOD;
	}
	cout << ans << endl;
}