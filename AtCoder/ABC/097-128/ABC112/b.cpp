#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, t;
	int ans = INF;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		int c, u;
		cin >> c >> u;
		if (u <= t) {
			ans = min(ans, c);
		}
	}
	if (ans == INF)
		cout << "TLE" << endl;
	else
		cout << ans << endl;
}