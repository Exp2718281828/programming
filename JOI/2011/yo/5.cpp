#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

const int INF = 1 << 30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w, n;
	char s[1005][1005];
	P g[10];
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> s[i][j];
			if (s[i][j] == 'S') s[i][j] = '0';
			if (s[i][j] != 'X' && s[i][j] != '.') g[s[i][j] - '0'] = {i, j};
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		queue<P> que;
		que.push(g[i]);
		int d[1005][1005];
		for (int j = 0; j < h; j++)
			for (int k = 0; k < w; k++) d[j][k] = INF;
		d[g[i].first][g[i].second] = 0;
		while (!que.empty()) {
			P u = que.front();
			que.pop();
			for (int j = 0; j < 4; j++) {
				int nx = u.first + dx[j];
				int ny = u.second + dy[j];
				if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
				if (s[nx][ny] == 'X') continue;
				if (d[nx][ny] != INF) continue;
				d[nx][ny] = d[u.first][u.second] + 1;
				if (g[i + 1] == make_pair(nx, ny)) goto EXIT;
				que.push({nx, ny});
			}
		}
	EXIT:
		ans += d[g[i + 1].first][g[i + 1].second];
	}
	cout << ans << endl;
}