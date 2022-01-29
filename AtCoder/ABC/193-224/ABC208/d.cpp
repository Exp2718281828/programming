#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;

int main() {
	int e[405][405];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) e[i][j] = INF;
	for (int i = 0; i < n; i++) e[i][i] = 0;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		e[a][b] = c;
	}
	long long int ans = 0;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) e[i][j] = min(e[i][j], e[i][k] + e[k][j]);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) ans += (e[i][j] == INF ? 0 : e[i][j]);
	}
	cout << ans << endl;
}