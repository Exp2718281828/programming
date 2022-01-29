#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
const int MOD = 998244353;
int s = 0;
int t[1005] = {};
int n, m, k;
int mem[1005][100005];

struct edge {
	int to;
	int num;
};

int dp(int p, int r) {
	if (mem[p][r] != -1) return mem[p][r];
	if (p == n - 1) {
		if (r == (s + k) / 2)
			return 1;
		else
			return 0;
	}
	int ans = dp(p + 1, r);
	if (t[p] <= (s + k) / 2 - r) ans += dp(p + 1, r + t[p]);
	ans %= MOD;
	mem[p][r] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	memset(mem, -1, sizeof(mem));
	int a[105];
	cin >> n >> m >> k;
	vector<edge> q[1005];
	vector<pair<int, int>> e;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		a[i] = x - 1;
	}
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		q[u].push_back({v, i});
		q[v].push_back({u, i});
		e.push_back({u, v});
	}
	for (int i = 0; i < m - 1; i++) {
		queue<int> que;
		int d[1005];
		que.push(a[i]);
		for (int j = 0; j < n; j++) d[j] = INF;
		d[a[i]] = 0;
		pair<int, int> f[1005];
		while (!que.empty()) {
			if (d[a[i + 1]] != INF) break;
			int v = que.front();
			que.pop();
			for (edge x : q[v]) {
				if (d[x.to] != INF) continue;
				que.push(x.to);
				f[x.to] = {v, x.num};
				d[x.to] = d[v] + 1;
			}
		}
		int p = a[i + 1];
		while (p != a[i]) {
			t[f[p].second]++;
			p = f[p].first;
		}
	}
	for (int i = 0; i < n - 1; i++) s += t[i];
	if ((s + k) % 2 != 0 || s + k < 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << dp(0, 0) << endl;
}