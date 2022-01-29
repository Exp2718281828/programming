#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int INF = 1 << 30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int d[1005][1005][4];
struct state {
	int x, y, dir;

   public:
	bool operator<(const state &z) const {
		if (x < z.x) return true;
		if (y < z.y) return true;
		if (dir < z.dir) return true;
		return false;
	}
	bool operator>(const state &z) const {
		if (x > z.x) return true;
		if (y > z.y) return true;
		if (dir > z.dir) return true;
		return false;
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	P s, g;
	cin >> h >> w;
	int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	s = {x1 - 1, x2 - 1};
	g = {x3 - 1, x4 - 1};
	char c[1005][1005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> c[i][j];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			for (int k = 0; k < 4; k++) d[i][j][k] = INF;
	priority_queue<pair<int, state>, vector<pair<int, state>>, greater<pair<int, state>>> que;
	for (int i = 0; i < 4; i++) {
		d[s.first][s.second][i] = 0;
		que.push({0, {s.first, s.second, i}});
	}
	while (!que.empty()) {
		pair<int, state> p = que.top();
		que.pop();
		state v = p.second;
		for (int i = 0; i < 4; i++) {
			int tx = v.x + dx[i];
			int ty = v.y + dy[i];
			int cost = d[v.x][v.y][v.dir] + (v.dir == i ? 0 : 1);
			if (tx >= 0 && tx < h && ty >= 0 && ty < w && c[tx][ty] == '.' && d[tx][ty][i] > cost) {
				d[tx][ty][i] = cost;
				que.push({cost, {tx, ty, i}});
			}
		}
	}
	int ans = min({
		d[g.first][g.second][0],
		d[g.first][g.second][1],
		d[g.first][g.second][2],
		d[g.first][g.second][3],
	});
	cout << ans << endl;
}