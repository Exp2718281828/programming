#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e5;

int digitsum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (n > 0) {
		ans += n % d;
		n /= d;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, k;
	cin >> n >> k;
	int p[100005];
	memset(p, -1, sizeof(p));
	bool f = false;
	for (long long int i = 0; i < k; i++) {
		if (p[n] != -1 && !f) {
			int a = i - p[n];
			i += (long long)k / (i - p[n]) * (i - p[n]);
			while (i >= k) i -= a;
			f = true;
		}
		p[n] = i;
		n += digitsum(n);
		n %= MOD;
	}
	cout << n << endl;
}