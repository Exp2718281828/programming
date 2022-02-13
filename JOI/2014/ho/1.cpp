#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	string c[1005];
	int maxd = 0;
	const char l[3] = {'J', 'O', 'I'};
	for (int i = 0; i < n; i++) cin >> c[i];
	char t[2][2];
	cin >> t[0][0] >> t[0][1] >> t[1][0] >> t[1][1];
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			for (int x = 0; x < 2; x++) {
				for (int y = 0; y < 2; y++) {
					if (c[i + x][j + y] != t[x][y]) goto EXIT;
				}
			}
			ans++;
		EXIT:;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 3; k++) {
				int d = 0;
				for (int dx = -1; dx <= 0; dx++) {
					for (int dy = -1; dy <= 0; dy++) {
						for (int x = 0; x < 2; x++) {
							for (int y = 0; y < 2; y++) {
								int nx = i + dx + x, ny = j + dy + y;
								if (nx < 0 || nx >= n || ny < 0 || ny >= m) goto EXIT2;
								if (c[nx][ny] != t[x][y]) goto EXIT2;
							}
						}
						d--;
					EXIT2:;
					}
				}
				for (int dx = -1; dx <= 0; dx++) {
					for (int dy = -1; dy <= 0; dy++) {
						for (int x = 0; x < 2; x++) {
							for (int y = 0; y < 2; y++) {
								int nx = i + dx + x, ny = j + dy + y;
								if (nx < 0 || nx >= n || ny < 0 || ny >= m) goto EXIT3;
								if ((nx == i && ny == j ? l[k] : c[nx][ny]) != t[x][y]) goto EXIT3;
							}
						}
						d++;
					EXIT3:;
					}
				}
				maxd = max(maxd, d);
			}
		}
	}
	cout << ans + maxd << endl;
}