#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
const int dx[4] = {1, -1, -1, 1};
const int dy[4] = {1, 1, -1, -1};
int d[1505][1505];
bool v[1505][1505][4];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int ax, ay, bx, by;
	cin >> n >> ax >> ay >> bx >> by;
	ax--, ay--, bx--, by--;
	string s[1505];
	for (int i = 0; i < n; i++) cin >> s[i];
	if ((ax + ay) % 2 - (bx + by) % 2 != 0) {
		cout << -1 << endl;
		return 0;
	}
	queue<pair<int, int>> que;
	que.push({ax, ay});
	for (int i = 0; i < n; i++) fill(d[i], d[i] + n, INF);
	d[ax][ay] = 0;
	while (!que.empty()) {
		pair<int, int> u = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			v[u.first][u.second][i] = true;
			for (int j = 1;; j++) {
				int nx = u.first + dx[i] * j, ny = u.second + dy[i] * j;
				if (nx < 0 || nx >= n || ny < 0 || ny >= n) break;
				if (s[nx][ny] == '#') break;
				if (v[nx][ny][i]) break;
				que.push({nx, ny});
				d[nx][ny] = min(d[nx][ny], d[u.first][u.second] + 1);
				v[nx][ny][i] = true;
			}
		}
	}
	cout << (d[bx][by] == INF ? -1 : d[bx][by]) << endl;
}