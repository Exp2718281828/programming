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
	int n, m;
	vector<int> q[200005];
	cin >> n >> m;
	int c = 0;
	unionfind tree(n);
	int ans[200005];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b);
	}
	for (int i = n - 1; i >= 0; i--) {
		c++;
		for (int x : q[i]) {
			if (!tree.same(i, x)) {
				tree.unite(i, x);
				c--;
			}
		}
		ans[i] = c;
	}
	ans[n] = 0;
	for (int i = 0; i < n; i++) cout << ans[i + 1] << endl;
}