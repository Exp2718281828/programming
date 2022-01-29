#include <bits/stdc++.h>
using namespace std;
const int INF = (1LL << 31) - 1;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, t;
	int ans = 0;
	cin >> n >> t;
	int u[200005];
	for (int i = 0; i < n; i++) cin >> u[i];
	u[n] = INF;
	for (int i = 0; i < n; i++) {
		ans += min(t, u[i + 1] - u[i]);
	}
	cout << ans << endl;
}