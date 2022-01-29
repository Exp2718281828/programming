#include <bits/stdc++.h>
using namespace std;

struct edge {
	int to, cost;
};
const long long int INF = 1LL << 60;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q, k;
	vector<edge> e[100005];
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		e[a].push_back({b, c});
		e[b].push_back({a, c});
	}
	cin >> q >> k;
	long long int d[100005];
	for (int i = 0; i < n; i++) d[i] = INF;
	queue<int> que;
	que.push(k - 1);
	d[k - 1] = 0;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (edge x : e[u]) {
			if (d[x.to] < INF) continue;
			d[x.to] = d[u] + x.cost;
			que.push(x.to);
		}
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		cout << d[x] + d[y] << endl;
	}
}