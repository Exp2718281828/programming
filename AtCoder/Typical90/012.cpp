#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

struct UnionFind {
	vector<vector<P>> p;
	vector<vector<int>> rank;
	UnionFind(int h, int w) {
		p.resize(h);
		for (int i = 0; i < h; i++) p[i].resize(w);
		rank.resize(h);
		for (int i = 0; i < h; i++) rank[i].resize(w);
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++) p[i][j] = {i, j};
	}
	P root(P x) {
		if (p[x.first][x.second] == x)
			return x;
		else
			return p[x.first][x.second] = root(p[x.first][x.second]);
	}
	void unite(P x, P y) {
		P rx = root(x);
		P ry = root(y);
		if (rx != ry) {
			if (rank[rx.first][rx.second] > rank[ry.first][ry.second]) {
				p[ry.first][ry.second] = p[rx.first][rx.second];
			} else {
				p[rx.first][rx.second] = p[ry.first][ry.second];
				if (rank[rx.first][rx.second] == rank[ry.first][ry.second]) rank[ry.first][ry.second]++;
			}
		}
	}
	bool same(P x, P y) {
		P rx = root(x);
		P ry = root(y);
		return rx == ry;
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	bool d[2005][2005] = {};
	const int dx[4] = {0, 1, 0, -1};
	const int dy[4] = {1, 0, -1, 0};
	int h, w;
	int q;
	cin >> h >> w >> q;
	UnionFind ds(h, w);
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		switch (t) {
			case 1:
				int r, c;
				cin >> r >> c;
				r--, c--;
				d[r][c] = true;
				for (int j = 0; j < 4; j++) {
					int nx = r + dx[j];
					int ny = c + dy[j];
					if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
					if (d[nx][ny]) ds.unite({r, c}, {nx, ny});
				}
				break;
			default:
				int ra, ca, rb, cb;
				cin >> ra >> ca >> rb >> cb;
				ra--, ca--, rb--, cb--;
				if (!(d[ra][ca] && d[rb][cb])) {
					cout << "No" << endl;
					continue;
				}
				if (ds.same({ra, ca}, {rb, cb}))
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
				break;
		}
	}
}