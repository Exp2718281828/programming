#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	int a[105][105];
	int b[105][105];
	cin >> h >> w;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> a[i][j];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> b[i][j];
	long long int ans = 0;
	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < w - 1; j++) {
			int d = b[i][j] - a[i][j];
			ans += abs(d);
			a[i][j] += d;
			a[i + 1][j] += d;
			a[i][j + 1] += d;
			a[i + 1][j + 1] += d;
			if (i == h - 2) {
				if (a[h - 1][j] != b[h - 1][j]) {
					cout << "No" << endl;
					return 0;
				}
			}
			if (j == w - 2) {
				if (a[i][w - 1] != b[i][w - 1]) {
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Yes" << endl;
	cout << ans << endl;
}