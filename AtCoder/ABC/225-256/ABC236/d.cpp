#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> a;
int n;
int ans = 0;

void dp(int u, int x) {
	int m = -1;
	for (int i = 0; i < 2 * n; i++) {
		if (!(u & (1 << i))) {
			m = i;
			u |= (1 << i);
			break;
		}
	}
	if (m == -1) {
		ans = max(ans, x);
		return;
	} else {
		for (int i = 0; i < 2 * n; i++) {
			if (!(u & (1 << i))) {
				dp(u | (1 << i), x ^ a[{m, i}]);
			}
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = i + 1; j < 2 * n; j++) {
			int x;
			cin >> x;
			a[{i, j}] = x;
		}
	}
	dp(0, 0);
	cout << ans << endl;
}