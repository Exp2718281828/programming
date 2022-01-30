#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1LL << 60;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int h[200005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> h[i];
	vector<int> q[200005];
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		q[x].push_back(y);
		q[y].push_back(x);
	}
	queue<int> que;
	que.push(0);
	long long int p[200005];
	fill(p, p + n, -INF);
	p[0] = 0;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int x : q[u]) {
			long long int d;
			if (h[u] > h[x])
				d = h[u] - h[x];
			else
				d = 2 * (h[u] - h[x]);
			if (p[x] >= p[u] + d) continue;
			p[x] = p[u] + d;
			que.push(x);
		}
	}
	long long int ans = -INF;
	for (int i = 0; i < n; i++) ans = max(ans, p[i]);
	cout << ans << endl;
}
