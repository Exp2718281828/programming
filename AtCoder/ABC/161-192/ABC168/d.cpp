#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> q[100005];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b);
		q[b].push_back(a);
	}
	int ans[100005];
	fill(ans, ans + n, -1);
	queue<int> que;
	int d[100005];
	fill(d, d + n, INF);
	que.push(0);
	d[0] = 0;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int x : q[u]) {
			if (d[x] != INF) continue;
			d[x] = d[u] + 1;
			que.push(x);
			ans[x + 1] = u + 1;
		}
	}
	cout << "Yes" << endl;
	for (int i = 2; i <= n; i++) cout << ans[i] << endl;
}