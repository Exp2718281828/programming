#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	int p[10][10005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> p[i][j];
	int ans = 0;
	for (int bit = 1; bit < (1 << h); bit++) {
		int c[80005] = {};
		int m = 0;
		for (int i = 0; i < w; i++) {
			int x = -1;
			for (int j = 0; j < h; j++) {
				if (!(bit & (1 << j))) continue;
				if (x == -1) {
					x = p[j][i];
				} else {
					if (x != p[j][i]) goto EXIT;
				}
			}
			c[x]++;
			if (c[x] > m) m = c[x];
		EXIT:;
		}
		ans = max(ans, __builtin_popcount(bit) * m);
	}
	cout << ans << endl;
}