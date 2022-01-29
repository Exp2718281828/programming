#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, c;
	int d[35][35];
	cin >> n >> c;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c; j++) cin >> d[i][j];
	}
	int f[3][35] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			f[(i + j) % 3][x - 1]++;
		}
	}
	int ans = INF;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < c; k++) {
				if (i == j || j == k || k == i) continue;
				int s = 0;
				for (int l = 0; l < c; l++) {
					s += d[l][i] * f[0][l];
					s += d[l][j] * f[1][l];
					s += d[l][k] * f[2][l];
				}
				ans = min(ans, s);
			}
		}
	}
	cout << ans << endl;
}