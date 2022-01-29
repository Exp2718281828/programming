#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
struct edge {
	int to, cost;
};
const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<edge> q[100005];
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		q[a].push_back({b, c});
		q[b].push_back({a, c});
	}
	priority_queue<P, vector<P>, greater<P>> que;
	int d[100005];
	fill(d, d + n, INF);
	d[0] = 0;
	que.push({0, 0});
	while (!que.empty()) {
		P p = que.top();
		que.pop();
		int u = p.second;
		if (d[u] < p.first) continue;
		for (edge x : q[u]) {
			if (d[x.to] <= d[u] + x.cost) continue;
			d[x.to] = d[u] + x.cost;
			que.push({d[x.to], x.to});
		}
	}
	int e[100005];
	fill(e, e + n, INF);
	e[n - 1] = 0;
	que.push({0, n - 1});
	while (!que.empty()) {
		P p = que.top();
		que.pop();
		int u = p.second;
		if (e[u] < p.first) continue;
		for (edge x : q[u]) {
			if (e[x.to] <= e[u] + x.cost) continue;
			e[x.to] = e[u] + x.cost;
			que.push({e[x.to], x.to});
		}
	}
	for (int i = 0; i < n; i++) {
		cout << d[i] + e[i] << endl;
	}
}