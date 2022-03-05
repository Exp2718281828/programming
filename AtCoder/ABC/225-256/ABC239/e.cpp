#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int ans[100005][20];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	int t[100005];
	cin >> n >> q;
	vector<int> r[100005];
	for (int i = 0; i < n; i++) cin >> t[i];
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		r[a].push_back(b);
		r[b].push_back(a);
	}
	int d[100005];
	fill(d, d + n, INF);
	d[0] = 0;
	queue<int> que;
	que.push(0);
	vector<int> v;
	v.push_back(0);
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int x : r[u]) {
			if (d[x] != INF) continue;
			que.push(x);
			d[x] = d[u] + 1;
			v.push_back(x);
		}
	}
	reverse(v.begin(), v.end());
	for (int x : v) {
		priority_queue<int> l;
		l.push(t[x]);
		for (int c : r[x]) {
			if (d[c] > d[x]) {
				for (int i = 0; i < 20; i++) l.push(ans[c][i]);
			}
		}
		for (int i = 0; i < 20; i++) {
			ans[x][i] = l.top();
			l.pop();
			if (l.empty()) break;
		}
	}
	while (q--) {
		int j, k;
		cin >> j >> k;
		j--, k--;
		cout << ans[j][k] << endl;
	}
}