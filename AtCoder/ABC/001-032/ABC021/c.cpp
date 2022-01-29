#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
const int MOD = 1e9 + 7;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a, b, m;
	cin >> n >> a >> b >> m;
	vector<int> q[105];
	a--, b--;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		q[x].push_back(y), q[y].push_back(x);
	}
	int d[105];
	fill(d, d + n, INF);
	long long int w[105] = {};
	queue<int> que;
	que.push(a);
	w[a] = 1;
	d[a] = 0;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int x : q[u]) {
			if (d[x] < d[u] + 1)
				continue;
			else if (d[x] == d[u] + 1) {
				w[x] += w[u];
			} else {
				w[x] += w[u];
				d[x] = d[u] + 1;
				que.push(x);
			}
		}
	}
	cout << w[b] % MOD << endl;
}