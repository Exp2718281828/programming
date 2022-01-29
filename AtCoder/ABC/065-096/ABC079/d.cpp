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
	int h, w;
	vector<edge> c[10];
	cin >> h >> w;
	int a[40005];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int k;
			cin >> k;
			c[i].push_back({j, k});
		}
	}
	for (int i = 0; i < h * w; i++) cin >> a[i];
	int d[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			d[i][j] = INF;
		}
	}
	for (int i = 0; i < 10; i++) {
		priority_queue<P, vector<P>, greater<P>> que;
		d[i][i] = 0;
		que.push({0, i});
		while (!que.empty()) {
			P p = que.top();
			que.pop();
			int u = p.second;
			if (d[i][u] < p.first) continue;
			for (edge x : c[u]) {
				if (d[i][x.to] > d[i][u] + x.cost) {
					d[i][x.to] = d[i][u] + x.cost;
					que.push({d[i][x.to], x.to});
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < h * w; i++) {
		if (a[i] != -1) ans += d[a[i]][1];
	}
	cout << ans << endl;
}