#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
using P = pair<int, int>;

struct edge {
	int to, cost;
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, r;
	cin >> n >> m >> r;
	vector<edge> q[205];
	vector<int> x;
	for (int i = 0; i < r; i++) {
		int a;
		cin >> a;
		x.push_back(a - 1);
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		q[a].push_back({b, c});
		q[b].push_back({a, c});
	}
	int dmin[205][205];
	for (int i = 0; i < n; i++) {
		vector<int> d;
		d.resize(n, INF);
		priority_queue<P, vector<P>, greater<P>> que;
		d[i] = 0;
		que.push({0, i});
		while (!que.empty()) {
			P p = que.top();
			que.pop();
			int u = p.second;
			if (d[u] < p.first) continue;
			for (edge v : q[u]) {
				if (d[v.to] > d[u] + v.cost) {
					d[v.to] = d[u] + v.cost;
					que.push({d[v.to], v.to});
				}
			}
		}
		for (int j = 0; j < n; j++) dmin[i][j] = d[j];
	}
	sort(x.begin(), x.end());
	int ans = INF;
	do {
		int s = 0;
		for (int i = 0; i < r - 1; i++) s += dmin[x[i]][x[i + 1]];
		ans = min(ans, s);
	} while (next_permutation(x.begin(), x.end()));
	cout << ans << endl;
}