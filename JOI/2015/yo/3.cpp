#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	char c[105][105];
	int ans[105][105];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> c[i][j];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			for (int k = 0;; k++) {
				if (c[i][j - k] == 'c') {
					ans[i][j] = k;
					break;
				}
				if (j - k == 0) {
					ans[i][j] = -1;
					break;
				}
			}
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << ans[i][j];
			j == w - 1 ? cout << endl : cout << ' ';
		}
	}
}