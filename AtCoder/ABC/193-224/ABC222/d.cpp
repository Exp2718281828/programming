#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int a[3005], b[3005];
int n;
int mem[3005][3005];

int dp(int x, int p) {
	if (mem[x][p] != -1) return mem[x][p];
	int ans = 0;
	if (p == n - 1) {
		ans = 1;
	} else {
		for (int i = b[p + 1]; i >= max(x, a[p + 1]); i--) {
			ans += dp(i, p + 1);
			ans %= MOD;
		}
	}
	mem[x][p] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	memset(mem, -1, sizeof(mem));
	int ans = 0;
	for (int i = b[0]; i >= a[0]; i--) {
		ans += dp(i, 0);
		ans %= MOD;
	}
	cout << ans << endl;
}