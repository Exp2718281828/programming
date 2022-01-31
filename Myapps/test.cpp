#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	char c[105][105];
	cin >> h >> w;
	P b;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) {
			cin >> c[i][j];
			if (c[i][j] == 'S') {
				b = {i, j};
				c[i][j] = '.';
			}
		}
	queue<P> que;
	bool v[105][105] = {};
	que.push(b);
	v[b.first][b.second] = true;
	while (!que.empty()) {
		P u = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int nx = u.first + dx[i], ny = u.second + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
			if (v[nx][ny]) continue;
			if (c[nx][ny] == '#') continue;
			v[nx][ny] = true;
			que.push({nx, ny});
		}
	}
	for (int i = 0; i < h; i++) {
		if (v[i][0] || v[i][w - 1]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i = 0; i < w; i++) {
		if (v[0][i] || v[h - 1][i]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}