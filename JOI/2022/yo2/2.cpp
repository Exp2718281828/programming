#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	char s[505][505];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> s[i][j];
	queue<pair<int, int>> que;
	int d[505][505];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) d[i][j] = INF;
	que.push({0, 0});
	d[0][0] = 0;
	while (!que.empty()) {
		pair<int, int> u = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int nx = u.first + dx[i];
			int ny = u.second + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
			if (s[u.first][u.second] == s[nx][ny]) continue;
			if (d[nx][ny] != INF) continue;
			que.push({nx, ny});
			d[nx][ny] = d[u.first][u.second] + 1;
		}
	}
	if (d[h - 1][w - 1] == INF)
		cout << -1 << endl;
	else
		cout << d[h - 1][w - 1] << endl;
}