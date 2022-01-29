#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int x[1005];
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		x[i] = b - a;
	}
	sort(x, x + m);
	int ans = 0;
	for (int i = 0; i < m - 1; i++) {
		ans += max(0, x[i] / 2);
	}
	cout << ans << endl;
}