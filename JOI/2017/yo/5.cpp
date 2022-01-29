#include <bits/stdc++.h>
using namespace std;

vector<int> q[1000005];
vector<int> r[1000005];
int c[1000005];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	int m[1005][1005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> m[i][j];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w - 1; j++) {
			if (m[i][j] > m[i][j + 1]) {
				q[m[i][j + 1] - 1].push_back(m[i][j] - 1);
				r[m[i][j] - 1].push_back(m[i][j + 1] - 1);
			} else {
				q[m[i][j] - 1].push_back(m[i][j + 1] - 1);
				r[m[i][j + 1] - 1].push_back(m[i][j] - 1);
			}
		}
	}
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h - 1; j++) {
			if (m[j][i] > m[j + 1][i]) {
				q[m[j + 1][i] - 1].push_back(m[j][i] - 1);
				r[m[j][i] - 1].push_back(m[j + 1][i] - 1);
			} else {
				q[m[j][i] - 1].push_back(m[j + 1][i] - 1);
				r[m[j + 1][i] - 1].push_back(m[j][i] - 1);
			}
		}
	}
	queue<int> b;
	for (int i = 0; i < h * w; i++)
		if (r[i].size() == 0) b.push(i);
	while (!b.empty()) {
		int s = b.front();
		b.pop();
		queue<int> que;
		que.push(s);
		bool v[1000005] = {};
		while (!que.empty()) {
			int y = que.front();
			que.pop();
			for (int x : q[y]) {
				if (v[x]) continue;
				v[x] = true;
				c[x]++;
				que.push(x);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < h * w; i++)
		if (c[i] >= 2) ans++;
	cout << ans << endl;
}