#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int p[1000005];
	p[0] = 1;
	for (int i = 0; i < (int)1e6; i++) {
		p[i + 1] = p[i] * 26LL % MOD;
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int m = (n + 1) / 2;
		long long int ans = 0;
		for (int i = 0; i < m; i++) {
			long long int u = s[i] - 'A';
			ans = (ans + u * p[m - i - 1]) % MOD;
		}
		bool f = true;
		if (n % 2 == 0) {
			for (int i = 0; i < m; i++) {
				if (s[m + i] < s[m - i - 1]) {
					f = false;
					break;
				} else if (s[m + i] > s[m - i - 1]) {
					f = true;
					break;
				}
			}
		} else {
			for (int i = 0; i < m; i++) {
				if (s[m + i - 1] < s[m - i - 1]) {
					f = false;
					break;
				} else if (s[m + i - 1] > s[m - i - 1]) {
					f = true;
					break;
				}
			}
		}
		if (f) ans = (ans + 1) % MOD;
		cout << ans << endl;
	}
}