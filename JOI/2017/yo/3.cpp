#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, d;
	char c[105][105];
	cin >> n >> m >> d;
	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> c[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - d + 1; j++) {
			for (int k = 0; k < d; k++) {
				if (c[i][j + k] == '#') goto EXIT;
			}
			ans++;
		EXIT:;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n - d + 1; j++) {
			for (int k = 0; k < d; k++) {
				if (c[j + k][i] == '#') goto EXIT2;
			}
			ans++;
		EXIT2:;
		}
	}
	cout << ans << endl;
}