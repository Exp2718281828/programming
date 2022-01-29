#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
int n;
int a[100005];
int mem[10][100005][10];

int dp(int k, int p, int l) {
	if (mem[k][p][l] != -1) return mem[k][p][l];
	int ans;
	if (p == n - 1) {
		if (l == k)
			ans = 1;
		else
			ans = 0;
	} else {
		ans = dp(k, p + 1, (l + a[p + 1]) % 10) + dp(k, p + 1, (l * a[p + 1]) % 10);
		ans %= MOD;
	}
	mem[k][p][l] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	memset(mem, -1, sizeof(mem));
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < 10; i++) cout << dp(i, 0, a[0]) << endl;
}