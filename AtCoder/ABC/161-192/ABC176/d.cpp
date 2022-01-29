#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int INF = 1 << 30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	P c, g;
	cin >> h >> w;
	{
		int p, q, r, s;
		cin >> p >> q >> r >> s;
		c = {p - 1, q - 1};
		g = {r - 1, s - 1};
	}
	char s[1005][1005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> s[i][j];
	int d[1005][1005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) d[i][j] = INF;
	deque<P> que;
	que.push_back(c);
	d[c.first][c.second] = 0;
	while (!que.empty()) {
		P u = que.front();
		que.pop_front();
		for (int i = 0; i < 4; i++) {
			int nx = u.first + dx[i], ny = u.second + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
			if (s[nx][ny] == '#') continue;
			if (d[nx][ny] <= d[u.first][u.second]) continue;
			que.push_front({nx, ny});
			d[nx][ny] = d[u.first][u.second];
		}
		for (int i = -2; i <= 2; i++) {
			for (int j = -2; j <= 2; j++) {
				int nx = u.first + i, ny = u.second + j;
				if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
				if (s[nx][ny] == '#') continue;
				if (d[nx][ny] <= d[u.first][u.second]) continue;
				que.push_back({nx, ny});
				d[nx][ny] = d[u.first][u.second] + 1;
			}
		}
	}
	cout << (d[g.first][g.second] == INF ? -1 : d[g.first][g.second]) << endl;
}