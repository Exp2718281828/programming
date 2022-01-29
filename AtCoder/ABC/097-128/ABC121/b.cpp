#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, c;
	cin >> n >> m >> c;
	int ans = 0;
	int b[25];
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		int s = c;
		for (int j = 0; j < m; j++) {
			int a;
			cin >> a;
			s += a * b[j];
		}
		if (s > 0) ans++;
	}
	cout << ans << endl;
}