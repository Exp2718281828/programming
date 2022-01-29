#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int INF = 1 << 30;
const int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	char c[1005][1005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> c[i][j];
	int v[1005][1005];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1 || c[i][j] == '.') {
				v[i][j] = -INF;
				continue;
			}
			int s = 0;
			for (int k = 0; k < 8; k++) {
				if (c[i + dx[k]][j + dy[k]] == '.') s++;
			}
			v[i][j] = s;
		}
	}
	queue<P> que;
	int ans = 0;
	int b = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (v[i][j] >= c[i][j] - '0') {
				que.push({i, j});
				b++;
				v[i][j] = -INF;
			}
		}
	}
	while (!que.empty()) {
		ans++;
		int t = b;
		b = 0;
		for (int i = 0; i < t; i++) {
			P u = que.front();
			que.pop();
			for (int j = 0; j < 8; j++) {
				int nx = u.first + dx[j], ny = u.second + dy[j];
				v[nx][ny]++;
				if (v[nx][ny] >= c[nx][ny] - '0') {
					que.push({nx, ny});
					b++;
					v[nx][ny] = -INF;
				}
			}
		}
	}
	cout << ans << endl;
}