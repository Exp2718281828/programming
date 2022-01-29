#include <bits/stdc++.h>
using namespace std;

const int dx[2] = {1, 0};
const int dy[2] = {0, 1};
const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	char c[105][105];
	cin >> h >> w;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> c[i][j];
	queue<pair<int, int>> que;
	int d[105][105];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) d[i][j] = -INF;
	que.push({0, 0});
	d[0][0] = 1;
	while (!que.empty()) {
		pair<int, int> u = que.front();
		que.pop();
		for (int i = 0; i < 2; i++) {
			int nx = u.first + dx[i];
			int ny = u.second + dy[i];
			if (nx >= h || ny >= w) continue;
			if (d[nx][ny] != -INF) continue;
			if (c[nx][ny] == '#') continue;
			d[nx][ny] = d[u.first][u.second] + 1;
			que.push({nx, ny});
		}
	}
	int ans = 0;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) ans = max(ans, d[i][j]);
	cout << ans << endl;
}