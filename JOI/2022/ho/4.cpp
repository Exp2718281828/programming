#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k, m;
	cin >> n >> k >> m;
	vector<int> q[100005];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		if (a > b) {
			for (int j = a; j >= max(a - k + 1, b + 1); j--) {
				for (int l = j - 1; l >= b; l--) q[j].push_back(l);
			}
		} else {
			for (int j = a; j <= min(a + k - 1, b - 1); j++) {
				for (int l = j + 1; l <= b; l++) q[j].push_back(l);
			}
		}
	}
	int r;
	cin >> r;
	while (r--) {
		int s, t;
		cin >> s >> t;
		s--, t--;
		queue<int> que;
		que.push(s);
		int d[100005];
		fill(d, d + n, INF);
		d[s] = 0;
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			for (int x : q[u]) {
				if (d[x] != INF) continue;
				d[x] = d[u] + 1;
				que.push(x);
			}
		}
		cout << (d[t] == INF ? -1 : d[t]) << endl;
	}
}