#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	char c[20][20];
	cin >> h >> w;
	int ans = 2;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> c[i][j];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (c[i][j] == '#') continue;
			stack<tuple<int, pair<int, int>, int>> stk;
			stk.push({0, {i, j}, 0});
			while (!stk.empty()) {
				auto u = stk.top();
				stk.pop();
				for (int k = 0; k < 4; k++) {
					int nx = get<1>(u).first + dx[k];
					int ny = get<1>(u).second + dy[k];
					if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
					if (c[nx][ny] == '#') continue;
					if (get<0>(u) & (1 << (nx * w + ny))) continue;
					if (nx == i && ny == j) {
						ans = max(ans, get<2>(u) + 1);
						continue;
					}
					stk.push({get<0>(u) | (1 << (nx * w + ny)), {nx, ny}, get<2>(u) + 1});
				}
			}
		}
	}
	cout << (ans == 2 ? -1 : ans) << endl;
}