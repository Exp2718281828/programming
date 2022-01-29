#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
int e[55][55];
int n, m;

bool solve(int p) {
	queue<int> q;
	q.push(0);
	int d[55];
	for (int i = 0; i < 55; i++) d[i] = INF;
	d[0] = 0;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int v = 0; v < m; v++) {
			if (e[u][v] == 0 || e[u][v] == p) continue;
			if (d[v] != INF) continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	bool ans = true;
	for (int i = 0; i < n; i++) {
		if (d[i] == INF) ans = false;
	}
	return ans;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		e[a - 1][b - 1] = i + 1;
		e[b - 1][a - 1] = i + 1;
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		if (!solve(i + 1)) ans++;
	}
	cout << ans << endl;
}