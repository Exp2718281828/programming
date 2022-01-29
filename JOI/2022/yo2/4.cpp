#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[3005];
long long int mem[3005][3005];

long long int dp(int p, int l) {
	if (mem[p][l] != -1) return mem[p][l];
	long long int ans = a[p];
	long long int m = 0;
	for (int i = 1; i <= 2 * k - 3; i++) {
		if (l + i >= k && p + i < n) {
			m = max(dp(p + i, i), m);
		}
	}
	ans += m;
	mem[p][l] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	// assert(n <= 300 || k <= 10);
	for (int i = 0; i < n; i++) cin >> a[i];
	long long int ans = 0;
	memset(mem, -1, sizeof(mem));
	for (int i = 0; i <= k; i++) {
		ans = max(ans, dp(i, k));
	}
	cout << ans << endl;
}