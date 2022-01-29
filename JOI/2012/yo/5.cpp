#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int w, h;
	cin >> w >> h;
	int m[105][105] = {};
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> m[j + 1][i + 1];
	bool visited[105][105] = {};
	int dx[8] = {1, 1, 0, 0, -1, 1, -1, -1};
	int dy[8] = {-1, 1, 1, -1, 0, 0, 1, -1};
	queue<pair<int, int>> que;
	que.push({0, 0});
	while (!que.empty()) {
		pair<int, int> u = que.front();
		que.pop();
		for (int i = 0; i < 6; i++) {
			int j = u.second % 2 == 0 ? i + 2 : i;
			int vx = u.first + dx[j];
			int vy = u.second + dy[j];
			if (vx < 0 || vx >= 105 || vy < 0 || vy >= 105) continue;
			if (m[vx][vy] == 1) continue;
			if (visited[vx][vy]) continue;
			visited[vx][vy] = true;
			que.push({vx, vy});
		}
	}
	for (int i = 0; i < 105; i++)
		for (int j = 0; j < 105; j++)
			if (!visited[i][j] && m[i][j] == 0) m[i][j] = 1;
	int ans = 0;
	for (int i = 0; i < 105; i++)
		for (int j = 0; j < 105; j++) {
			if (m[i][j] == 0) continue;
			for (int k = 0; k < 6; k++) {
				int l = j % 2 == 0 ? k + 2 : k;
				int vx = i + dx[l];
				int vy = j + dy[l];
				if (vx < 0 || vx >= 105 || vy < 0 || vy >= 105) continue;
				if (m[vx][vy] == 0) ans++;
			}
		}
	cout << ans << endl;
}