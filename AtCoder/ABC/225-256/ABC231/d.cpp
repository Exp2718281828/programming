#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	bool c[100005] = {};
	int c_cnt = 0;
	vector<int> q[100005];
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b);
		q[b].push_back(a);
		if (!c[a]) c_cnt++;
		if (!c[b]) c_cnt++;
		c[a] = c[b] = true;
	}
	for (int i = 0; i < n; i++) {
		if (!c[i]) continue;
		c[i] = false;
		queue<int> que;
		que.push(i);
		int v[100005];
		for (int j = 0; j < n; j++) v[j] = INF;
		v[i] = 0;
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			c[u] = false;
			int k = 0;
			for (int x : q[u]) {
				if (v[x] != INF && v[x] != v[u] - 1) {
					cout << "No" << endl;
					return 0;
				}
				if (v[x] == v[u] - 1) continue;
				que.push(x);
				v[x] = v[u] + 1;
				k++;
			}
			if (v[u] > 0 && k >= 2) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
}