#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
int s[400005];
vector<int> v[400005];

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
	int n, m, k, q;
	vector<P> vl;
	cin >> n >> m >> k;
	unionfind uf(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		v[x].push_back(y);
		v[y].push_back(x);
		vl.push_back({x, y});
	}
	for (int i = 0; i < n; i++) cin >> s[i];
	map<P, vector<P>> u;
	for (auto z : vl) {
		int x = z.first, y = z.second;
		if (s[x] == s[y])
			uf.unite(x, y);
		else
			u[{s[x], s[y]}].push_back({x, y});
	}
	cin >> q;
	assert(max({n, m, q}) <= 80000);
	for (int i = 0; i < q; i++) {
		unionfind uft(n);
		uft = uf;
		int a, b;
		cin >> a >> b;
		a--, b--;
		if (a > b) swap(a, b);
		for (P x : u[{s[a], s[b]}]) {
			uft.unite(x.first, x.second);
		}
		for (P x : u[{s[b], s[a]}]) {
			uft.unite(x.first, x.second);
		}
		if (uft.same(a, b))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}