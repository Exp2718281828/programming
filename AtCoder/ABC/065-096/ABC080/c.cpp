#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int f[105][15];
	int p[105][15];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 10; j++) cin >> f[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 11; j++) cin >> p[i][j];

	int ans = -INF;
	for (int bit = 1; bit < (1 << 10); bit++) {
		int s = 0;
		for (int i = 0; i < n; i++) {
			int c = 0;
			for (int j = 0; j < 10; j++)
				if ((bit & (1 << j)) && f[i][j] == 1) c++;
			s += p[i][c];
		}
		ans = max(ans, s);
	}
	cout << ans << endl;
}