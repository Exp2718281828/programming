#include <bits/stdc++.h>
using namespace std;

struct unionfind {
	vector<int> rank, par;

	unionfind(int n) {
		rank.resize(n, 0);
		par.resize(n, 0);
		for (int i = 0; i < n; i++) {
			par[i] = i;
			rank[i] = 0;
		}
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int root(int x) {
		if (x != par[x]) par[x] = root(par[x]);
		return par[x];
	}

	void unite(int x, int y) {
		int rx = root(x);
		int ry = root(y);
		if (rank[rx] > rank[ry]) {
			par[ry] = rx;
		} else {
			par[rx] = ry;
			if (rank[rx] == rank[ry]) rank[ry]++;
		}
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> q[100005];
	int ans[100005];
	unionfind uf(n);
	fill(ans, ans + n, 0);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b), q[b].push_back(a);
		ans[a]--, ans[b]--;
	}
	bool v[100005] = {};
	for (int i = 0; i < n; i++) {
		if (v[i]) continue;
		queue<int> que;
		que.push(i);
		v[i] = true;
		int c = 0;
		vector<int> z = {i};
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			for (int x : q[u]) {
				if (v[x]) continue;
				que.push(x);
				v[x] = true;
				c++;
				z.push_back(x);
				uf.unite(i, x);
			}
		}
		for (int x : z) ans[x] += c;
	}
	for (int i = 0; i < k; i++) {
		int c, d;
		cin >> c >> d;
		c--, d--;
		if (uf.same(c, d)) ans[c]--, ans[d]--;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i];
		i == n - 1 ? cout << endl : cout << ' ';
	}
}