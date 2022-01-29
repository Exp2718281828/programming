#include <bits/stdc++.h>
using namespace std;

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
	long long int k, a, b;
	cin >> k >> a >> b;
	long long int A = 0, B = 0;
	for (int i = 0;; i++) {
		A += (a % 10) * intpow(k, i);
		a /= 10;
		if (a == 0) break;
	}
	for (int i = 0;; i++) {
		B += (b % 10) * intpow(k, i);
		b /= 10;
		if (b == 0) break;
	}
	cout << (long long)A * B << endl;
}