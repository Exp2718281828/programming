#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[11][11];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> a[i][j];
	int m;
	cin >> m;
	bool d[11][11] = {};
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		d[x - 1][y - 1] = true;
		d[y - 1][x - 1] = true;
	}
	int ans = INF;
	int order[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	do {
		int s = 0;
		for (int i = 0; i < n - 1; i++) {
			if (d[order[i]][order[i + 1]]) goto EXIT;
		}
		for (int i = 0; i < n; i++) s += a[order[i]][i];
		ans = min(s, ans);
	EXIT:;
	} while (next_permutation(order, order + n));
	if (ans == INF) ans = -1;
	cout << ans << endl;
}