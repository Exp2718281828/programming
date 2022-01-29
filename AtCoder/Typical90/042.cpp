#include <bits/stdc++.h>
using namespace std;

int mem[100005];
const int MOD = 1e9 + 7;

int dp(int n) {
	if (mem[n] != -1) return mem[n];
	int ans = 0;
	for (int i = 1; i < 10; i++) {
		if (i == n) {
			ans++;
			break;
		}
		ans += dp(n - i);
		ans %= MOD;
	}
	mem[n] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	memset(mem, -1, sizeof(mem));
	int k;
	cin >> k;
	if (k % 9 != 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << dp(k) << endl;
}