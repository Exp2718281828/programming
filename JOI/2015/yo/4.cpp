#include <bits/stdc++.h>
using namespace std;

int n, m;
int c[1005], d[1005];
int mem[1005][1005];

int dp(int p, int r) {
	if (p == n) return 0;
	if (mem[p][r] != -1) return mem[p][r];
	int ans = d[p] * c[p + r] + dp(p + 1, r);
	if (r < m - n) ans = min(ans, dp(p, r + 1));
	mem[p][r] = ans;
	return ans;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> d[i];
	for (int i = 0; i < m; i++) cin >> c[i];
	memset(mem, -1, sizeof(mem));
	cout << dp(0, 0) << endl;
}