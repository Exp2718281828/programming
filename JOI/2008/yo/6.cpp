#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<P> q[105]; // first: 向かう先 / second: 運賃
	for (int i = 0; i < k; i++) {
		int t;
		cin >> t;
		if (t == 0) {
			int a, b;
			cin >> a >> b;
			a--;
			b--;
			int d[105];
			for (int j = 0; j < n; j++) d[j] = INF;
			d[a] = 0;
			priority_queue<P, vector<P>, greater<P>> que; // first: 運賃 / second: 頂点番号
			que.push({0, a});
			while (!que.empty()) {
				P p = que.top();
				que.pop();
				int v = p.second;
				if (d[v] < p.first) continue;
				for (auto x : q[v]) {
					if (d[x.first] > d[v] + x.second) {
						d[x.first] = d[v] + x.second;
						que.push({d[x.first], x.first});
					}
				}
			}
			if (d[b] == INF)
				cout << -1 << endl;
			else
				cout << d[b] << endl;
		} else {
			int c, d, e;
			cin >> c >> d >> e;
			c--;
			d--;
			q[c].push_back({d, e});
			q[d].push_back({c, e});
		}
	}
}