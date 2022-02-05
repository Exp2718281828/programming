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

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
}